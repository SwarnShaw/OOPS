import java.util.HashMap;
import java.util.Map;

public class UC8 {

    // HashMap to store ASCII patterns
    static Map<Character, String[]> patternMap = new HashMap<>();

    // Method to initialize patterns
    public static void generatePatterns() {

        patternMap.put('O', new String[]{
                String.join("", " ***** "),
                String.join("", "*     *"),
                String.join("", "*     *"),
                String.join("", "*     *"),
                String.join("", "*     *"),
                String.join("", "*     *"),
                String.join("", " ***** ")
        });

        patternMap.put('P', new String[]{
                String.join("", "*****  "),
                String.join("", "*    * "),
                String.join("", "*    * "),
                String.join("", "*****  "),
                String.join("", "*      "),
                String.join("", "*      "),
                String.join("", "*      ")
        });

        patternMap.put('S', new String[]{
                String.join("", " ***** "),
                String.join("", "*      "),
                String.join("", "*      "),
                String.join("", " ***** "),
                String.join("", "      *"),
                String.join("", "      *"),
                String.join("", " ***** ")
        });
    }

    // Method to retrieve pattern
    public static String[] getPattern(char c) {
        return patternMap.get(c);
    }

    public static void main(String[] args) {

        generatePatterns();

        String message = "OOPS";

        String[] banner = new String[7];

        for (int i = 0; i < 7; i++) {

            StringBuilder line = new StringBuilder();

            for (char ch : message.toCharArray()) {
                String[] pattern = getPattern(ch);
                line.append(pattern[i]).append("  ");
            }

            banner[i] = line.toString();
        }

        for (String line : banner) {
            System.out.println(line);
        }
    }
}