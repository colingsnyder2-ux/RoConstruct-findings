#include <G3D/CoordinateFrame.h>
#include <G3D/Rect2D.h>
#include <G3D/Color3.h>
#include <algorithm>
G3D::Vector3 (G3D::Vector3::*scaleVector)(float) const = &G3D::Vector3::operator*;
float (G3D::Vector3::*lengthSquared)() const = &G3D::Vector3::squaredMagnitude;
bool (G3D::Vector3::*equalVector)(const G3D::Vector3&) const = &G3D::Vector3::operator==;
G3D::Vector3 (G3D::CoordinateFrame::*transformPoint)(const G3D::Vector3&) const = &G3D::CoordinateFrame::pointToWorldSpace;
const float& (__cdecl *stdMaxFloat)(const float&, const float&) = &std::max<float>;
const float& (__cdecl *stdMinFloat)(const float&, const float&) = &std::min<float>;
float (__cdecl *g3dMaxFloat)(const float&, const float&) = &G3D::max<float>;
float (__cdecl *g3dMinFloat)(const float&, const float&) = &G3D::min<float>;
float (G3D::Vector3::*vectorMagnitude)() const = &G3D::Vector3::magnitude;
G3D::Vector3 (G3D::Vector3::*vectorDirection)() const = &G3D::Vector3::direction;
G3D::Vector3 (G3D::Vector3::*vectorCross)(const G3D::Vector3&) const = &G3D::Vector3::cross;
float (G3D::Vector3::*vectorDot)(const G3D::Vector3&) const = &G3D::Vector3::dot;
G3D::Vector3 (G3D::Vector3::*vectorClamp)(const G3D::Vector3&, const G3D::Vector3&) const = &G3D::Vector3::clamp;
G3D::Vector3 (G3D::Vector3::*vectorMax)(const G3D::Vector3&) const = &G3D::Vector3::max;
bool (G3D::Vector3::*vectorIsUnit)() const = &G3D::Vector3::isUnit;
bool (G3D::CoordinateFrame::*frameEqual)(const G3D::CoordinateFrame&) const = &G3D::CoordinateFrame::operator==;
bool (G3D::CoordinateFrame::*frameDifferent)(const G3D::CoordinateFrame&) const = &G3D::CoordinateFrame::operator!=;
G3D::CoordinateFrame (G3D::CoordinateFrame::*frameInverse)() const = &G3D::CoordinateFrame::inverse;
G3D::CoordinateFrame (G3D::CoordinateFrame::*frameMultiply)(const G3D::CoordinateFrame&) const = &G3D::CoordinateFrame::operator*;
G3D::Vector3 (G3D::CoordinateFrame::*frameLook)() const = &G3D::CoordinateFrame::lookVector;
G3D::Vector3 (G3D::CoordinateFrame::*frameObjectPoint)(const G3D::Vector3&) const = &G3D::CoordinateFrame::pointToObjectSpace;
G3D::Vector3 (G3D::Matrix3::*matrixVector)(const G3D::Vector3&) const = &G3D::Matrix3::operator*;
G3D::Vector2 (G3D::Vector2::*vector2Min)(const G3D::Vector2&) const = &G3D::Vector2::min;
G3D::Vector2 (G3D::Vector2::*vector2Max)(const G3D::Vector2&) const = &G3D::Vector2::max;
G3D::Vector2 (G3D::Vector2::*vector2Scale)(float) const = &G3D::Vector2::operator*;
bool (G3D::Color3::*colorEqual)(const G3D::Color3&) const = &G3D::Color3::operator==;
bool (G3D::Color3::*colorDifferent)(const G3D::Color3&) const = &G3D::Color3::operator!=;
G3D::Vector2 (G3D::Rect2D::*rectCenter)() const = &G3D::Rect2D::center;
bool (G3D::Rect2D::*rectContains)(const G3D::Vector2&) const = &G3D::Rect2D::contains;
G3D::Rect2D (__cdecl *rectCorners)(const G3D::Vector2&, const G3D::Vector2&) = &G3D::Rect2D::xyxy;
G3D::Rect2D (__cdecl *rectCoordinates)(float,float,float,float) = &G3D::Rect2D::xyxy;
float (__cdecl *clampFloat)(float,float,float) = &G3D::clamp;
