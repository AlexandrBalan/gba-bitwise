#include <bn_core.h>
#include <bn_log.h>
#include <bn_string.h>
#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_sprite_ptr.h>

#include "base_conv.h"

#include "bn_sprite_items_frobert.h"

int main() {
    bn::core::init();

    bn::sprite_ptr frobert = bn::sprite_items::frobert.create_sprite();

    BN_LOG("Hey!");

    bn::backdrop::set_color(bn::color());

    while(true) {
        bn::core::update();
    }
}