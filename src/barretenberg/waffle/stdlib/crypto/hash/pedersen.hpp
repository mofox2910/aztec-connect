#pragma once

#include <cstdint>

#include "../crypto.hpp"

namespace waffle {
class TurboComposer;
}

namespace plonk {
namespace stdlib {

template <typename ComposerContext> class field_t;

namespace pedersen {
field_t<waffle::TurboComposer> compress(const field_t<waffle::TurboComposer>& left,
                                        const field_t<waffle::TurboComposer>& right,
                                        const size_t hash_index = 0);

point compress_to_point(const field_t<waffle::TurboComposer>& left,
                    const field_t<waffle::TurboComposer>& right,
                    const size_t hash_index = 0);
}
} // namespace stdlib
} // namespace plonk