// from server: 69% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll roc_espclaude_66f86a925cdd10d3.cpp

// Candidate translation unit (score above; library headers required).
#undef OGRE_NONCLIENT_BUILD
#include <OgreTextureManager.h>
#include <OgreTexture.h>
#include <OgreImage.h>
#include <OgreLogManager.h>
#include <string>
#include <vector>
#include <algorithm>

extern "C" __declspec(dllimport) long __stdcall InterlockedIncrement(volatile long*);
extern "C" __declspec(dllimport) long __stdcall InterlockedDecrement(volatile long*);

namespace G3D {
typedef unsigned char uint8;
class AtomicInt32 {
	volatile long m_value;
public:
	void increment() { InterlockedIncrement(&m_value); }
	long decrement() { return InterlockedDecrement(&m_value); }
};
class ReferenceCountedObject {
public:
	AtomicInt32 ReferenceCountedObject_refCount;
	void* ReferenceCountedObject_weakPointer;
	void ReferenceCountedObject_zeroWeakPointers();
	virtual ~ReferenceCountedObject();
};
template<class T> class ReferenceCountedPointer {
	T* m_pointer;
	void zeroPointer() {
		if (m_pointer != NULL) {
			if (m_pointer->ReferenceCountedObject_refCount.decrement() == 0) {
				m_pointer->ReferenceCountedObject_zeroWeakPointers();
				delete m_pointer;
			}
			m_pointer = NULL;
		}
	}
	void setPointer(T* x) {
		if (x != m_pointer) {
			zeroPointer();
			if (x != NULL) {
				m_pointer = x;
				m_pointer->ReferenceCountedObject_refCount.increment();
			}
		}
	}
public:
	ReferenceCountedPointer() : m_pointer(NULL) {}
	ReferenceCountedPointer(const ReferenceCountedPointer& r) : m_pointer(NULL) { setPointer(r.m_pointer); }
	~ReferenceCountedPointer() { zeroPointer(); }
	ReferenceCountedPointer& operator=(T* p) { setPointer(p); return *this; }
};
class Color3 { public: float r, g, b; };
class Color3uint8 {
public:
	uint8 r, g, b;
	Color3uint8() : r(0), g(0), b(0) {}
	Color3uint8(const uint8 _r, const uint8 _g, const uint8 _b) : r(_r), g(_g), b(_b) {}
	Color3uint8(const Color3& c);
};
class GImage {
public:
	enum Format { JPEG, BMP, TGA, PCX, ICO, PPM_ASCII, PPM, PNG, AUTODETECT, UNKNOWN };
	uint8* _byte;
	int width;
	int height;
	int channels;

	GImage(const std::string& filename, Format format = AUTODETECT);
	GImage(int width, int height, int channels = 3);
	virtual ~GImage();
	Color3uint8* pixel3() { return (Color3uint8*)_byte; }
	Color3uint8& pixel3(int x, int y) { return pixel3()[x + y * width]; }
};
class Texture : public ReferenceCountedObject {};
class RenderDevice;
}

namespace RBX {
class BrickColor {
	int number;
public:
	G3D::Color3 color3() const;
	static const std::vector<BrickColor>& colorPalette();
};

std::string stringify(double);

namespace Render {
class TextureProxyBase : public G3D::ReferenceCountedObject {
protected:
	std::string filename;
	int pad28;
	int pad2c;
};
class TextureProxy : public TextureProxyBase {
protected:
	G3D::ReferenceCountedPointer<G3D::Texture> texture;
	bool loaded;
	void* textureManager;
	bool tiled;
	G3D::ReferenceCountedPointer<TextureProxy> root;
	G3D::ReferenceCountedPointer<TextureProxy> shadeTexture;
	G3D::Color3 shadeColor;
public:
	virtual G3D::ReferenceCountedPointer<G3D::Texture> resolve(G3D::RenderDevice* rd);
	static void shadePixel(const G3D::Color3uint8&, G3D::Color3uint8&);
};
}

namespace RenderNew {
class MegaTextureProxy : public Render::TextureProxy {
	Ogre::TexturePtr ogreTexture;
public:
	static const size_t numStrips = 32;
	virtual G3D::ReferenceCountedPointer<G3D::Texture> resolve(G3D::RenderDevice* rd);
};

G3D::ReferenceCountedPointer<G3D::Texture> MegaTextureProxy::resolve(G3D::RenderDevice* rd)
{
	if (!loaded) {
		MegaTextureProxy* self = this;
		size_t count = std::min(numStrips, BrickColor::colorPalette().size());

		G3D::GImage strip(filename, G3D::GImage::AUTODETECT);
		G3D::GImage atlas(strip.width * numStrips, strip.height, 3);

		for (size_t i = 0; i < count; i++) {
			G3D::Color3uint8 color(BrickColor::colorPalette()[i].color3());

			G3D::Color3uint8 colorTable[256];
			for (size_t j = 0; j < 256; j++) {
				colorTable[j] = G3D::Color3uint8(j, j, j);
				shadePixel(color, colorTable[j]);
			}

			for (int x = 0; x < strip.width; x++) {
				for (int y = 0; y < strip.height; y++) {
					const G3D::Color3uint8& src = strip.pixel3(x, y);
					G3D::Color3uint8& dst = atlas.pixel3(x + i * strip.width, y);
					dst = colorTable[src.r];
				}
			}
		}

		const char* name = "TextureAtlas";
		ogreTexture = Ogre::TextureManager::getSingleton().getByName(name);

		if (ogreTexture.isNull()) {
			Ogre::Image image;
			image.loadDynamicImage(atlas._byte, atlas.width, atlas.height, 1, Ogre::PF_BYTE_RGB, false, 1, 0);

			while (true) {
				try {
					ogreTexture = Ogre::TextureManager::getSingleton().create(name, "General");
					ogreTexture->loadImage(image);
					break;
				}
				catch (...) {
					if (image.getWidth() > 512 || image.getHeight() > 512) {
						Ogre::TextureManager::getSingleton().remove(ogreTexture->getHandle());
						image.resize(image.getWidth() / 2, image.getHeight() / 2);
						Ogre::LogManager::getSingleton().logMessage(std::string("Error loading texture. Reduce size to ") + stringify(atlas.width) + "x" + stringify(atlas.height) + " and try again\n");
					}
					else {
						Ogre::LogManager::getSingleton().logMessage(std::string("Give up on loading texture ") + name);
						break;
					}
				}
			}
		}

		self->root = NULL;
		self->loaded = true;
	}

	return texture;
}
}
}
