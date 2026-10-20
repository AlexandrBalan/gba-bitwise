#include <bn_core.h>
#include <bn_log.h>
#include <bn_string.h>
#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_sprite_ptr.h>

#include "base_conv.h"

#include "bn_sprite_items_face.h"

int main() {
    bn::core::init();

    bn::sprite_ptr face = bn::sprite_items::face.create_sprite();

    int number = 7;
    int other_number = 0b111;

    if(number == other_number) {
        BN_LOG("equal");
    }
    else {
        BN_LOG("not equal");
    }

    BN_LOG("Hey!");

    bn::backdrop::set_color(bn::color());

    while(true) {
        bn::core::update();
    }
}