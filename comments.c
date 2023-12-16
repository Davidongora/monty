/* Function to process the line and check for comments */
void process_line(char *line) {
    if (line[0] == '#') {
        // This line is a comment, do nothing
        return;
    }

    // Process the line as an opcode or other instruction
    // Your existing logic for opcode processing goes here
    // ...
}

/* Example usage */
int main() {
    char line[] = "# This is a comment";
    process_line(line);

    char opcode_line[] = "add";
    process_line(opcode_line);

    // Continue with other code
    // ...

    return 0;
}
