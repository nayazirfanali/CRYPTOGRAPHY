#include <stdio.h>
#include <string.h>

int
main(void)
{
        char   *string  = "Hello World";
        gchar  *sha512;

        sha512 = g_compute_checksum_for_string(G_CHECKSUM_SHA512, string, strlen(string));
        g_print("%s\n", sha512);
        g_free(sha512);
        return 0; 
}
