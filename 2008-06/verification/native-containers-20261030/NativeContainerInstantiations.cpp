// Genuine G3D and Boost template bodies; layouts come only from SDK headers.
#include <G3D/Array.h>
#include <G3D/Vector2.h>
#include <G3D/Vector3.h>
#include <G3D/Rect2D.h>
#include "Network/Player.h"
#include "gui/GUI.h"
#include "v8datamodel/Stats.h"
#include "v8datamodel/PartInstance.h"
#include <boost/shared_ptr.hpp>

template void G3D::Array<G3D::Vector2>::resize(int, bool);
template void G3D::Array<G3D::Vector2>::resize(int);
template void G3D::Array<G3D::Vector2>::insert(int, const G3D::Vector2&);
template void G3D::Array<G3D::Vector2>::append(const G3D::Vector2&);
template void G3D::Array<G3D::Vector2>::append(const G3D::Vector2&, const G3D::Vector2&);
template void G3D::Array<G3D::Vector2>::append(const G3D::Vector2&, const G3D::Vector2&, const G3D::Vector2&);
template void G3D::Array<G3D::Vector2>::append(const G3D::Vector2&, const G3D::Vector2&, const G3D::Vector2&, const G3D::Vector2&);
template void G3D::Array<G3D::Vector2>::append(const G3D::Array<G3D::Vector2>&);
template void G3D::Array<G3D::Vector2>::remove(int, int);
template void G3D::Array<G3D::Vector2>::fastRemove(int);
template G3D::Vector2 G3D::Array<G3D::Vector2>::pop(bool);
template void G3D::Array<G3D::Vector2>::popDiscard(bool);
template void G3D::Array<G3D::Vector2>::clear();
template void G3D::Array<G3D::Vector2>::fastClear();
template void G3D::Array<G3D::Vector2>::swap(G3D::Array<G3D::Vector2>&);
template void G3D::Array<G3D::Rect2D>::resize(int, bool);
template void G3D::Array<G3D::Rect2D>::resize(int);

template boost::shared_ptr<RBX::PartInstance> boost::dynamic_pointer_cast<RBX::PartInstance,RBX::Instance>(const boost::shared_ptr<RBX::Instance>&);
template boost::shared_ptr<RBX::Network::Player> boost::dynamic_pointer_cast<RBX::Network::Player,RBX::Instance>(const boost::shared_ptr<RBX::Instance>&);
template boost::shared_ptr<RBX::TextDisplay> boost::dynamic_pointer_cast<RBX::TextDisplay,RBX::Instance>(const boost::shared_ptr<RBX::Instance>&);
template boost::shared_ptr<RBX::Stats::Item> boost::dynamic_pointer_cast<RBX::Stats::Item,RBX::Instance>(const boost::shared_ptr<RBX::Instance>&);

template void G3D::Array<G3D::Vector3>::resize(int, bool);
template void G3D::Array<G3D::Vector3>::resize(int);
template void G3D::Array<G3D::Vector3>::insert(int, const G3D::Vector3&);
template void G3D::Array<G3D::Vector3>::append(const G3D::Vector3&);
template void G3D::Array<G3D::Vector3>::append(const G3D::Vector3&, const G3D::Vector3&);
template void G3D::Array<G3D::Vector3>::append(const G3D::Vector3&, const G3D::Vector3&, const G3D::Vector3&);
template void G3D::Array<G3D::Vector3>::append(const G3D::Vector3&, const G3D::Vector3&, const G3D::Vector3&, const G3D::Vector3&);
template void G3D::Array<G3D::Vector3>::append(const G3D::Array<G3D::Vector3>&);
template void G3D::Array<G3D::Vector3>::remove(int, int);
template void G3D::Array<G3D::Vector3>::fastRemove(int);
template G3D::Vector3 G3D::Array<G3D::Vector3>::pop(bool);
template void G3D::Array<G3D::Vector3>::popDiscard(bool);
template void G3D::Array<G3D::Vector3>::clear();
template void G3D::Array<G3D::Vector3>::fastClear();
template void G3D::Array<G3D::Vector3>::swap(G3D::Array<G3D::Vector3>&);
template void G3D::Array<unsigned int>::resize(int, bool);
template void G3D::Array<unsigned int>::resize(int);
template void G3D::Array<unsigned int>::insert(int, const unsigned int&);
template void G3D::Array<unsigned int>::append(const unsigned int&);
template void G3D::Array<unsigned int>::append(const unsigned int&, const unsigned int&);
template void G3D::Array<unsigned int>::append(const unsigned int&, const unsigned int&, const unsigned int&);
template void G3D::Array<unsigned int>::append(const unsigned int&, const unsigned int&, const unsigned int&, const unsigned int&);
template void G3D::Array<unsigned int>::append(const G3D::Array<unsigned int>&);
template void G3D::Array<unsigned int>::remove(int, int);
template void G3D::Array<unsigned int>::fastRemove(int);
template unsigned int G3D::Array<unsigned int>::pop(bool);
template void G3D::Array<unsigned int>::popDiscard(bool);
template void G3D::Array<unsigned int>::clear();
template void G3D::Array<unsigned int>::fastClear();
template void G3D::Array<unsigned int>::swap(G3D::Array<unsigned int>&);
