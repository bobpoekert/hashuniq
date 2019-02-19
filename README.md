
hashuniq is a unix command-line program that reads lines from stdin, hashes them, and outputs the lines only if they don't match hashes of lines it's seen before.

this gets you the same result as the common `sort | uniq` pattern, but since it doesn't have to sort the lines it can do it faster.

usage: input lines to stdin and read output lines from stdout. there are no options or arguments.

thanks to:

Geoff Gole (geoffgole@gmail.com) for the difference trie implementation we use to store the hashes

Austin Appleby for the murmur3 hash function implementation
