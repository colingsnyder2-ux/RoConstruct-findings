// from server: 100% by tajop
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw roc_unit_5cb5d07b43822c22.cpp

// Candidate translation unit (score above; library headers required).
#include <string>
#include <G3D/Vector2.h>
#include <G3D/Rect2D.h>
#include <G3D/Color4.h>
#include <G3D/CoordinateFrame.h>
#include <G3D/AABox.h>
#include <G3D/Sphere.h>
#include <G3D/LineSegment.h>
#include "RbxGraphics/TextureProxyBase.h"

namespace RBX
{
	class Adorn
	{
	public:
		enum Spacing
		{
			PROPORTIONAL_SPACING,
			FIXED_SPACING
		};
		enum XAlign
		{
			XALIGN_RIGHT,
			XALIGN_LEFT,
			XALIGN_CENTER
		};
		enum YAlign
		{
			YALIGN_TOP,
			YALIGN_BASELINE,
			YALIGN_CENTER,
			YALIGN_BOTTOM
		};

	public:
		Adorn()
		{
		}
		virtual ~Adorn()
		{
		}
	public:
		virtual G3D::ReferenceCountedPointer<TextureProxyBase> createTextureProxy(const std::string& filename) = 0;
		virtual void prepareRenderPass() {}
		virtual G3D::Rect2D getViewport() const = 0;
		virtual int getWidth() const = 0;
		virtual int getHeight() const = 0;
		virtual void setTexture(int id, G3D::ReferenceCountedPointer<TextureProxyBase> _texture) = 0;
		virtual G3D::Rect2D getTextureSize(G3D::ReferenceCountedPointer<TextureProxyBase> _texture) const = 0;
		virtual void line2d(const G3D::Vector2& p0, const G3D::Vector2& p1, const G3D::Color4& color) const = 0;
		virtual void outlineRect2d(const G3D::Rect2D& rect, float thick, const G3D::Color4& color) const = 0;
		virtual void rect2d(const G3D::Rect2D& rect, const G3D::Color4& color) const = 0;
		virtual G3D::Vector2 get2DStringBounds(const std::string& s, double size, Spacing spacing) const = 0;
		virtual G3D::Vector2 drawFont2D(const std::string& s, const G3D::Vector2& pos2d, double size, const G3D::Color4& color, const G3D::Color4& outline, XAlign xalign, YAlign yalign, Spacing spacing) const = 0;
		virtual void setObjectToWorldMatrix(const G3D::CoordinateFrame& c) = 0;
		virtual void setColor(const G3D::Color4& color) = 0;
		virtual void box(const G3D::AABox& box, const G3D::Color4& solidColor, const G3D::Color4& wireColor) = 0;
		virtual void sphere(const G3D::Sphere& sphere, const G3D::Color4& solidColor, const G3D::Color4& wireColor) = 0;
		virtual void cylinderAlongX(float radius, float length, const G3D::Color4& solidColor, const G3D::Color4& wireColor) = 0;
		virtual void ray(const G3D::Ray& ray, const G3D::Color4& color, float scale) = 0;
		virtual void lineSegment(const G3D::LineSegment& lineSegment, const G3D::Color4& color, float scale) = 0;
		virtual void axes(const G3D::Color4& xColor, const G3D::Color4& yColor, const G3D::Color4& zColor, float scale) = 0;
		virtual void quad(const G3D::Vector3& v0, const G3D::Vector3& v1, const G3D::Vector3& v2, const G3D::Vector3& v3, const G3D::Color4& color) = 0;
	};
}

#include "G3D/ReferenceCount.h"
#include "G3D/Vector2.h"
#include "G3D/Color4.h"
#include "G3D/Rect2D.h"
#include "G3D/CoordinateFrame.h"
#include "G3D/Sphere.h"
#include "G3D/LineSegment.h"
#include "GLG3D/RenderDevice.h"
#include "GLG3D/TextureManager.h"

namespace RBX
{
    class AdornG3D : public Adorn
    {
        private:
            G3D::RenderDevice* renderDevice;
            G3D::TextureManager textureManager;

        public:
            AdornG3D(G3D::RenderDevice*);

            G3D::RenderDevice* getRenderDevice();

            virtual TextureProxyBaseRef createTextureProxy(const std::string& filename);
            virtual G3D::Rect2D getViewport() const;

            virtual int getWidth() const;
            virtual int getHeight() const;

            virtual void setTexture(int id, TextureProxyBaseRef _texture);
            virtual G3D::Rect2D getTextureSize(TextureProxyBaseRef _texture) const;

            virtual void line2d(const G3D::Vector2& p0, const G3D::Vector2& p1, const G3D::Color4& color) const;
            virtual void outlineRect2d(const G3D::Rect2D& rect, float thick, const G3D::Color4& color) const;
            virtual void rect2d(const G3D::Rect2D& rect, const G3D::Color4& color) const;

            virtual G3D::Vector2 get2DStringBounds(const std::string& s, double size, Adorn::Spacing spacing) const;
            virtual G3D::Vector2 drawFont2D(const std::string& s, const G3D::Vector2& pos2d, double size, const G3D::Color4& color, const G3D::Color4& outline, Adorn::XAlign xalign, Adorn::YAlign yalign, Adorn::Spacing spacing) const;

            virtual void setObjectToWorldMatrix(const G3D::CoordinateFrame& c);
            virtual void setColor(const G3D::Color4& color);

            virtual void box(const G3D::AABox& box, const G3D::Color4& solidColor, const G3D::Color4& wireColor);
            virtual void sphere(const G3D::Sphere& sphere, const G3D::Color4& solidColor, const G3D::Color4& wireColor);
            virtual void cylinderAlongX(float radius, float length, const G3D::Color4& solidColor, const G3D::Color4& wireColor);
            virtual void ray(const G3D::Ray& ray, const G3D::Color4& color, float scale);
            virtual void lineSegment(const G3D::LineSegment& lineSegment, const G3D::Color4& color, float scale);
            virtual void axes(const G3D::Color4& xColor, const G3D::Color4& yColor, const G3D::Color4& zColor, float scale);
            virtual void quad(const G3D::Vector3& v0, const G3D::Vector3& v1, const G3D::Vector3& v2, const G3D::Vector3& v3, const G3D::Color4& color);
    };
}

#include "AppDraw/DrawPrimitives.h"
#include "AppDraw/Fonts.h"
#include "GLG3D/Draw.h"
#include "GLG3D/Texture.h"
#include "RenderLib/TextureProxy.h"
#include "RbxGraphics/TextureProxyBase.h"

namespace RBX
{
    G3D::Rect2D AdornG3D::getViewport() const
    {
        return renderDevice->getViewport();
    }

    int AdornG3D::getWidth() const
    {
        return renderDevice->getWidth();
    }

    int AdornG3D::getHeight() const
    {
        return renderDevice->getHeight();
    }

    G3D::Rect2D AdornG3D::getTextureSize(TextureProxyBaseRef _texture) const
    {
        if (_texture.notNull())
        {
            Render::TextureProxy* textureProxy = static_cast<Render::TextureProxy*>(_texture.getPointer());
            G3D::TextureRef texture = textureProxy->resolve(renderDevice);

            if (texture.notNull())
                return texture->rect2DBounds();
        }

        return G3D::Rect2D();
    }

    void AdornG3D::setTexture(int id, TextureProxyBaseRef _texture)
    {
        if (_texture.notNull())
        {
            Render::TextureProxy* textureProxy = static_cast<Render::TextureProxy*>(_texture.getPointer());
            renderDevice->setTexture(id, textureProxy->resolve(renderDevice));
        }
        else
        {
            renderDevice->setTexture(id, NULL);
        }
    }

    void AdornG3D::rect2d(const G3D::Rect2D& rect, const G3D::Color4& color) const
    {
        DrawPrimitives::rect2d(Rect(rect), renderDevice, color);
    }

    void AdornG3D::outlineRect2d(const G3D::Rect2D& rect, float thick, const G3D::Color4& color) const
    {
        DrawPrimitives::outlineRect2d(Rect(rect), thick, renderDevice, color);
    }

    void AdornG3D::line2d(const G3D::Vector2& p0, const G3D::Vector2& p1, const G3D::Color4& color) const
    {
        DrawPrimitives::line2d(p0, p1, renderDevice, color);
    }

    G3D::Vector2 AdornG3D::get2DStringBounds(const std::string& s, double size, Adorn::Spacing spacing) const
    {
        G3D::GFontRef font = Fonts::getFont();
        return font->get2DStringBounds(s, size, static_cast<G3D::GFont::Spacing>(spacing));
    }

    G3D::Vector2 AdornG3D::drawFont2D(const std::string& s, const G3D::Vector2& pos2d, double size, const G3D::Color4& color, const G3D::Color4& outline, Adorn::XAlign xalign, Adorn::YAlign yalign, Adorn::Spacing spacing) const
    {
        G3D::GFontRef font = Fonts::getFont();
        return font->draw2D(renderDevice, s, pos2d, size, color, outline, static_cast<G3D::GFont::XAlign>(xalign), static_cast<G3D::GFont::YAlign>(yalign), static_cast<G3D::GFont::Spacing>(spacing));
    }

    void AdornG3D::setObjectToWorldMatrix(const G3D::CoordinateFrame& c)
    {
        renderDevice->setObjectToWorldMatrix(c);
    }

    void AdornG3D::box(const G3D::AABox& box, const G3D::Color4& solidColor, const G3D::Color4& wireColor)
    {
        setColor(solidColor);
        DrawPrimitives::rawBox(box, renderDevice);
    }

    void AdornG3D::sphere(const G3D::Sphere& sphere, const G3D::Color4& solidColor, const G3D::Color4& wireColor)
    {
        setColor(solidColor);
        DrawPrimitives::rawSphere(sphere.radius, renderDevice);
    }


    void AdornG3D::cylinderAlongX(float radius, float length, const G3D::Color4& solidColor, const G3D::Color4& wireColor)
    {
        setColor(solidColor);
        DrawPrimitives::rawCylinderAlongX(radius, length, renderDevice);
    }

    void AdornG3D::ray(const G3D::Ray& ray, const G3D::Color4& color, float scale)
    {
        G3D::Draw::ray(ray, renderDevice, color, scale);
    }

    void AdornG3D::lineSegment(const G3D::LineSegment& lineSegment, const G3D::Color4& color, float scale)
    {
        G3D::Draw::lineSegment(lineSegment, renderDevice, color, scale);
    }

    void AdornG3D::axes(const G3D::Color4& xColor, const G3D::Color4& yColor, const G3D::Color4& zColor, float scale)
    {
        G3D::Draw::axes(renderDevice, xColor, yColor, zColor, scale);
    }

    void AdornG3D::quad(const G3D::Vector3& v0, const G3D::Vector3& v1, const G3D::Vector3& v2, const G3D::Vector3& v3, const G3D::Color4& color)
    {
        setColor(color);
        renderDevice->beginPrimitive(G3D::RenderDevice::QUADS);
        renderDevice->sendVertex(v0);
        renderDevice->sendVertex(v1);
        renderDevice->sendVertex(v2);
        renderDevice->sendVertex(v3);
        renderDevice->endPrimitive();
    }

    TextureProxyBaseRef AdornG3D::createTextureProxy(const std::string& filename)
    {
        Render::TextureProxy* proxy = new Render::TextureProxy(textureManager, filename, false);
        return TextureProxyBaseRef(proxy);
    }

    void AdornG3D::setColor(const G3D::Color4& color)
    {
        renderDevice->setColor(color);
    }
}
