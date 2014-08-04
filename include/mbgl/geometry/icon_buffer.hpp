#ifndef MBGL_GEOMETRY_ICON_BUFFER
#define MBGL_GEOMETRY_ICON_BUFFER

#include "buffer.hpp"

namespace mbgl {

    class IconVertexBuffer : public Buffer<
    20
    > {
    public:
        static const double angleFactor;

        size_t add(int16_t x, int16_t y, float ox, float oy, int16_t tx, int16_t ty, float angle, float minzoom, std::array<float, 2> range, float maxzoom, float labelminzoom);

    };

}

#endif
