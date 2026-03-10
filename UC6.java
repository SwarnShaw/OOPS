public class UC6 {
    // Pattern for letter O
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

    // Pattern for letter P
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

    // Pattern for letter S
    public static String[] buildS() {
        return new String[]{
            String.join("", " ***** "),
            String.join("", "*     "),
            String.join("", "*     "),
            String.join("", " ***** "),
            String.join("", "      *"),
            String.join("", "      *"),
            String.join("", " ***** ")
        };
    }

    public static void main(String[] args) {

        String[] O = buildO();
        String[] P = buildP();
        String[] S = buildS();

        // Banner array populated by calling methods
        String[] banner = {
            O[0] + "  " + P[0] + "  " + S[0],
            O[1] + "  " + P[1] + "  " + S[1],
            O[2] + "  " + P[2] + "  " + S[2],
            O[3] + "  " + P[3] + "  " + S[3],
            O[4] + "  " + P[4] + "  " + S[4],
            O[5] + "  " + P[5] + "  " + S[5],
            O[6] + "  " + P[6] + "  " + S[6]
        };

        // Print banner using enhanced for loop
        for (String line : banner) {
            System.out.println(line);
        }
    }
}
