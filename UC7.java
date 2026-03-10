public class UC7 {

    /* Part 2 – Inner Class */
    static class Letter {

        private String[] pattern;

        public Letter(String[] pattern) {
            this.pattern = pattern;
        }

        public String getLine(int index) {
            return pattern[index];
        }
    }

    /* Part 3 – Utility Static Methods */

    public static String[] buildO() {
        return new String[]{
                String.join("", " ***** "),
                String.join("", "*     *"),
                String.join("", "*     *"),
                String.join("", "*     *"),
                String.join("", "*     *"),
                String.join("", "*     *"),
                String.join("", " ***** ")
        };
    }

    public static String[] buildP() {
        return new String[]{
                String.join("", "*****  "),
                String.join("", "*    * "),
                String.join("", "*    * "),
                String.join("", "*****  "),
                String.join("", "*      "),
                String.join("", "*      "),
                String.join("", "*      ")
        };
    }

    public static String[] buildS() {
        return new String[]{
                String.join("", " ***** "),
                String.join("", "*      "),
                String.join("", "*      "),
                String.join("", " ***** "),
                String.join("", "      *"),
                String.join("", "      *"),
                String.join("", " ***** ")
        };
    }

    /* Part 4 – Main Method */

    public static void main(String[] args) {

        Letter O1 = new Letter(buildO());
        Letter O2 = new Letter(buildO());
        Letter P = new Letter(buildP());
        Letter S = new Letter(buildS());

        Letter[] letters = {O1, O2, P, S};

        String[] banner = new String[7];

        for (int i = 0; i < 7; i++) {

            StringBuilder line = new StringBuilder();

            for (Letter letter : letters) {
                line.append(letter.getLine(i)).append("  ");
            }

            banner[i] = line.toString();
        }

        for (String line : banner) {
            System.out.println(line);
        }
    }
}