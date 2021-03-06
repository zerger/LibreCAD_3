#pragma once

#include "cad/const.h"
#include "geocoordinate.h"

namespace lc {
    namespace geo {
        class Arc  {
            public:
                Arc(const Coordinate& center, double radius, double startAngle, double endAngle);

                /**
                 * @brief Returns center of Arc
                 * @return geo::Coordinate Center
                 */
                const Coordinate center() const;

                /*!
                 * \brief Returns the radius of Arc.
                 * \return Double Radius.
                 */
                double radius() const;
                /*!
                 * \brief Returns the startAngle
                 * \return Double startAngle.
                 */
                double startAngle() const;
                /*!
                 * \brief Returns the EndAngle
                 * \return Double EndAngle.
                 */
                double endAngle() const;

                Coordinate nearestPointOnPath(const Coordinate& coord) const;
                bool isCoordinateOnPath(const Coordinate& coord) const;

            private:
                friend std::ostream& operator<<(std::ostream& os, const Arc& a) {
                    os << "Arc(center=" << a._center << " radius=" << a._radius << " startAngle=" << a._startAngle << " endAngle=" << a._endAngle << ")";
                    return os;
                }

            private:
                const Coordinate _center; /*!< Coordinate center of Arc */
                const double _radius; /*!< Double _Radius of Arc */
                const double _startAngle;/*!< Double startAngle of Arc */
                const double _endAngle;/*!< Double endAngle of Arc */
        };
    }
}
