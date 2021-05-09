#include <gb/gb.h>

void main(void)
{
    DISPLAY_ON;

    // Loop forever
    while(1) {

		// Done processing, yield CPU and wait for start of next frame
        wait_vbl_done();
    }
}
