// from server: 89% by nuck16
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_unit_ec611182a3fc305b.cpp

// Candidate translation unit (score above; library headers required).
#define _CPPUNWIND 1
#include <string>
#include <boost/shared_ptr.hpp>
#include "G3D/ReferenceCount.h"
#include "G3D/Vector3.h"
#include "G3D/Color4.h"
namespace G3D { class GImage { public: class Error { public: char prefix[0x28]; std::string reason; }; }; }

namespace RBX
{
	enum MessageType { MESSAGE_OUTPUT, MESSAGE_INFO, MESSAGE_WARNING, MESSAGE_ERROR };
	class StandardOut
	{
	public:
		static boost::shared_ptr<StandardOut> singleton();
		void __cdecl print(MessageType type, const char* format, ...);
	};
	class SkyParameters;
	class Sky : public G3D::ReferenceCountedObject
	{
	public:
		static G3D::ReferenceCountedPointer<Sky> create(SkyParameters* parameters);
	};
	typedef G3D::ReferenceCountedPointer<Sky> SkyRef;
	struct LightingParameters
	{
		char data[0xf8];
		LightingParameters(const LightingParameters&);
		~LightingParameters();
	};
	class Lighting
	{
	public:
		char pad0[0x130];
		LightingParameters parameters;
		G3D::Vector3 ambientBottom;
		G3D::Vector3 ambientTop;
		bool skyEnabled;
		char pad241[3];
		G3D::Color4 clearColor;
		char pad254[0x2d4 - 0x254];
		SkyParameters* skyParameters;
	};
	class LightingHolder
	{
	public:
		Lighting* getLighting();
	};
	class Renderer
	{
	public:
		virtual void v0();
		virtual void setLighting(SkyRef sky, LightingParameters parameters, G3D::Vector3 ambientBottom, G3D::Vector3 ambientTop);
		char pad4[0x10];
		G3D::Color4 clearColor;
	};
	namespace ViewNew
	{
		class ViewG3D
		{
		public:
			virtual ~ViewG3D();
			int pad4;
			Renderer* renderer;
			char padc[8];
			LightingHolder* holder;
			char pad18[0x44 - 0x18];
			bool lightingValid;
			SkyRef sky;
			void updateLighting();
		};

		void ViewG3D::updateLighting()
		{
			if (lightingValid)
				return;
			Lighting* lighting = holder ? holder->getLighting() : NULL;
			if (!lighting->skyEnabled)
			{
				sky = NULL;
			}
			else if (sky.isNull())
			{
				try
				{
					sky = Sky::create(lighting->skyParameters);
				}
				catch (G3D::GImage::Error& e)
				{
					StandardOut::singleton()->print(MESSAGE_ERROR, "Failed to load sky box. %s", e.reason.c_str());
				}
				catch (...)
				{
					StandardOut::singleton()->print(MESSAGE_ERROR, "Failed to load sky box");
				}
			}
			Renderer* r = renderer;
			r->setLighting(sky, lighting->parameters, lighting->ambientBottom, lighting->ambientTop);
			renderer->clearColor = G3D::Color4(lighting->clearColor);
			lightingValid = true;
		}
	}
}
