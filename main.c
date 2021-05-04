#include <gb/gb.h>
#include "LaroldsJubilantJunkyard_data.h"
#include "LaroldsJubilantJunkyard_map.h"

void main(void)
{
    // Load & set our background data
    set_bkg_data(0,178,LaroldsJubilantJunkyard_data);

    // The gameboy screen is 160px wide by 144px tall
    // We deal with tiles that are 8px wide and 8px tall
    // 160/8 = 20, and 144/8 = 18
    set_bkg_tiles(0,0,20,18,LaroldsJubilantJunkyard_map);

    SHOW_BKG;
    DISPLAY_ON;

    // Loop forever
    while(1) {

		// Done processing, yield CPU and wait for start of next frame
        wait_vbl_done();
    }
}
