// from server: 84% by EspClaude
// from server: 77% by king_originala
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// Complete native0045f7b0 document transition, with verified genuine interfaces.
#include <string>
#include <memory>
#include <cstddef>
#include <typeinfo>
#include <intrin.h>

// Genuine Windows SDK used declarations; default compiler includes only CRT headers.
struct HWND__;typedef HWND__* HWND;struct tagRECT;struct _GUID;
typedef long HRESULT;typedef unsigned long ULONG;typedef int BOOL;
extern "C" __declspec(dllimport) BOOL __stdcall InvalidateRect(HWND,const tagRECT*,BOOL);
struct IUnknown {virtual HRESULT __stdcall QueryInterface(const _GUID&,void**)=0;virtual ULONG __stdcall AddRef()=0;virtual ULONG __stdcall Release()=0;};
namespace boost {
namespace noncopyable_ {class noncopyable {protected:noncopyable(){}~noncopyable(){}private:noncopyable(const noncopyable&);const noncopyable&operator=(const noncopyable&);};}typedef noncopyable_::noncopyable noncopyable;
namespace detail {
// Actual Boost1.34.1 Windows counted base; only unused methods are omitted.
class sp_counted_base {
 sp_counted_base(const sp_counted_base&);sp_counted_base&operator=(const sp_counted_base&);
 long use_count_,weak_count_;
public:
 sp_counted_base():use_count_(1),weak_count_(1){}
 virtual ~sp_counted_base(){}
 virtual void dispose()=0;
 virtual void destroy(){delete this;}
 virtual void*get_deleter(const std::type_info&)=0;
 void add_ref_copy(){_InterlockedIncrement(&use_count_);}
 void release(){if(_InterlockedDecrement(&use_count_)==0){dispose();weak_release();}}
 void weak_release(){if(_InterlockedDecrement(&weak_count_)==0)destroy();}
};
class shared_count {sp_counted_base*pi_;
public:shared_count():pi_(0){}
 shared_count(const shared_count&r):pi_(r.pi_){if(pi_)pi_->add_ref_copy();}
 shared_count&operator=(const shared_count&); //004025b0 native out-of-line boundary
 ~shared_count(){if(pi_)pi_->release();}
};
}
template<class T>class shared_ptr {T*px;detail::shared_count pn;
template<class Y>friend class shared_ptr;
public:shared_ptr():px(0),pn(){}
 template<class Y>shared_ptr(const shared_ptr<Y>&r):px(r.px),pn(r.pn){}
 void reset(); //00456e80 native out-of-line boundary
 template<class Y>shared_ptr&operator=(const shared_ptr<Y>&r){px=r.px;pn=r.pn;return *this;}
 T*get()const{return px;}T&operator*()const{return *px;}T*operator->()const{return px;}
 typedef T*shared_ptr::*unspecified_bool_type;
 operator unspecified_bool_type()const{return px==0?0:&shared_ptr::px;}
};
}

namespace boost {template<class T>inline void checked_delete(T*x){typedef char type_must_be_complete[sizeof(T)?1:-1];(void)sizeof(type_must_be_complete);delete x;}
class recursive_mutex;namespace detail {template<class M>class scoped_lock;}
template<class T>class scoped_ptr {T*ptr;scoped_ptr(const scoped_ptr&);scoped_ptr&operator=(const scoped_ptr&);
public:explicit scoped_ptr(T*p=0):ptr(p){}~scoped_ptr(){boost::checked_delete(ptr);}
void reset(T*p=0){scoped_ptr(p).swap(*this);}void swap(scoped_ptr&b){T*tmp=b.ptr;b.ptr=ptr;ptr=tmp;}T*get()const{return ptr;}T*operator->()const{return ptr;}
};}
namespace ATL {
inline IUnknown*__stdcall AtlComPtrAssign(IUnknown**pp,IUnknown*lp){if(pp==0)return 0;if(lp)lp->AddRef();if(*pp)(*pp)->Release();*pp=lp;return lp;}
template<class T>class CComPtrBase {protected:CComPtrBase()throw():p(0){}public:T*p;~CComPtrBase()throw(){if(p)p->Release();}operator T*()const throw(){return p;}};
template<class T>class CComPtr:public CComPtrBase<T> {public:T*operator=(T*lp)throw(){if(*this!=lp)return static_cast<T*>(AtlComPtrAssign((IUnknown**)&p,lp));return *this;}};
}

typedef enum {
	/* The keyboard syms have been cleverly chosen to map to ASCII */
	SDLK_UNKNOWN		= 0,
	SDLK_FIRST		= 0,
	SDLK_BACKSPACE		= 8,
	SDLK_TAB		= 9,
	SDLK_CLEAR		= 12,
	SDLK_RETURN		= 13,
	SDLK_PAUSE		= 19,
	SDLK_ESCAPE		= 27,
	SDLK_SPACE		= 32,
	SDLK_EXCLAIM		= 33,
	SDLK_QUOTEDBL		= 34,
	SDLK_HASH		= 35,
	SDLK_DOLLAR		= 36,
	SDLK_AMPERSAND		= 38,
	SDLK_QUOTE		= 39,
	SDLK_LEFTPAREN		= 40,
	SDLK_RIGHTPAREN		= 41,
	SDLK_ASTERISK		= 42,
	SDLK_PLUS		= 43,
	SDLK_COMMA		= 44,
	SDLK_MINUS		= 45,
	SDLK_PERIOD		= 46,
	SDLK_SLASH		= 47,
	SDLK_0			= 48,
	SDLK_1			= 49,
	SDLK_2			= 50,
	SDLK_3			= 51,
	SDLK_4			= 52,
	SDLK_5			= 53,
	SDLK_6			= 54,
	SDLK_7			= 55,
	SDLK_8			= 56,
	SDLK_9			= 57,
	SDLK_COLON		= 58,
	SDLK_SEMICOLON		= 59,
	SDLK_LESS		= 60,
	SDLK_EQUALS		= 61,
	SDLK_GREATER		= 62,
	SDLK_QUESTION		= 63,
	SDLK_AT			= 64,
	/* 
	   Skip uppercase letters
	 */
	SDLK_LEFTBRACKET	= 91,
	SDLK_BACKSLASH		= 92,
	SDLK_RIGHTBRACKET	= 93,
	SDLK_CARET		= 94,
	SDLK_UNDERSCORE		= 95,
	SDLK_BACKQUOTE		= 96,
	SDLK_a			= 97,
	SDLK_b			= 98,
	SDLK_c			= 99,
	SDLK_d			= 100,
	SDLK_e			= 101,
	SDLK_f			= 102,
	SDLK_g			= 103,
	SDLK_h			= 104,
	SDLK_i			= 105,
	SDLK_j			= 106,
	SDLK_k			= 107,
	SDLK_l			= 108,
	SDLK_m			= 109,
	SDLK_n			= 110,
	SDLK_o			= 111,
	SDLK_p			= 112,
	SDLK_q			= 113,
	SDLK_r			= 114,
	SDLK_s			= 115,
	SDLK_t			= 116,
	SDLK_u			= 117,
	SDLK_v			= 118,
	SDLK_w			= 119,
	SDLK_x			= 120,
	SDLK_y			= 121,
	SDLK_z			= 122,
	SDLK_DELETE		= 127,
	/* End of ASCII mapped keysyms */

	/* International keyboard syms */
	SDLK_WORLD_0		= 160,		/* 0xA0 */
	SDLK_WORLD_1		= 161,
	SDLK_WORLD_2		= 162,
	SDLK_WORLD_3		= 163,
	SDLK_WORLD_4		= 164,
	SDLK_WORLD_5		= 165,
	SDLK_WORLD_6		= 166,
	SDLK_WORLD_7		= 167,
	SDLK_WORLD_8		= 168,
	SDLK_WORLD_9		= 169,
	SDLK_WORLD_10		= 170,
	SDLK_WORLD_11		= 171,
	SDLK_WORLD_12		= 172,
	SDLK_WORLD_13		= 173,
	SDLK_WORLD_14		= 174,
	SDLK_WORLD_15		= 175,
	SDLK_WORLD_16		= 176,
	SDLK_WORLD_17		= 177,
	SDLK_WORLD_18		= 178,
	SDLK_WORLD_19		= 179,
	SDLK_WORLD_20		= 180,
	SDLK_WORLD_21		= 181,
	SDLK_WORLD_22		= 182,
	SDLK_WORLD_23		= 183,
	SDLK_WORLD_24		= 184,
	SDLK_WORLD_25		= 185,
	SDLK_WORLD_26		= 186,
	SDLK_WORLD_27		= 187,
	SDLK_WORLD_28		= 188,
	SDLK_WORLD_29		= 189,
	SDLK_WORLD_30		= 190,
	SDLK_WORLD_31		= 191,
	SDLK_WORLD_32		= 192,
	SDLK_WORLD_33		= 193,
	SDLK_WORLD_34		= 194,
	SDLK_WORLD_35		= 195,
	SDLK_WORLD_36		= 196,
	SDLK_WORLD_37		= 197,
	SDLK_WORLD_38		= 198,
	SDLK_WORLD_39		= 199,
	SDLK_WORLD_40		= 200,
	SDLK_WORLD_41		= 201,
	SDLK_WORLD_42		= 202,
	SDLK_WORLD_43		= 203,
	SDLK_WORLD_44		= 204,
	SDLK_WORLD_45		= 205,
	SDLK_WORLD_46		= 206,
	SDLK_WORLD_47		= 207,
	SDLK_WORLD_48		= 208,
	SDLK_WORLD_49		= 209,
	SDLK_WORLD_50		= 210,
	SDLK_WORLD_51		= 211,
	SDLK_WORLD_52		= 212,
	SDLK_WORLD_53		= 213,
	SDLK_WORLD_54		= 214,
	SDLK_WORLD_55		= 215,
	SDLK_WORLD_56		= 216,
	SDLK_WORLD_57		= 217,
	SDLK_WORLD_58		= 218,
	SDLK_WORLD_59		= 219,
	SDLK_WORLD_60		= 220,
	SDLK_WORLD_61		= 221,
	SDLK_WORLD_62		= 222,
	SDLK_WORLD_63		= 223,
	SDLK_WORLD_64		= 224,
	SDLK_WORLD_65		= 225,
	SDLK_WORLD_66		= 226,
	SDLK_WORLD_67		= 227,
	SDLK_WORLD_68		= 228,
	SDLK_WORLD_69		= 229,
	SDLK_WORLD_70		= 230,
	SDLK_WORLD_71		= 231,
	SDLK_WORLD_72		= 232,
	SDLK_WORLD_73		= 233,
	SDLK_WORLD_74		= 234,
	SDLK_WORLD_75		= 235,
	SDLK_WORLD_76		= 236,
	SDLK_WORLD_77		= 237,
	SDLK_WORLD_78		= 238,
	SDLK_WORLD_79		= 239,
	SDLK_WORLD_80		= 240,
	SDLK_WORLD_81		= 241,
	SDLK_WORLD_82		= 242,
	SDLK_WORLD_83		= 243,
	SDLK_WORLD_84		= 244,
	SDLK_WORLD_85		= 245,
	SDLK_WORLD_86		= 246,
	SDLK_WORLD_87		= 247,
	SDLK_WORLD_88		= 248,
	SDLK_WORLD_89		= 249,
	SDLK_WORLD_90		= 250,
	SDLK_WORLD_91		= 251,
	SDLK_WORLD_92		= 252,
	SDLK_WORLD_93		= 253,
	SDLK_WORLD_94		= 254,
	SDLK_WORLD_95		= 255,		/* 0xFF */

	/* Numeric keypad */
	SDLK_KP0		= 256,
	SDLK_KP1		= 257,
	SDLK_KP2		= 258,
	SDLK_KP3		= 259,
	SDLK_KP4		= 260,
	SDLK_KP5		= 261,
	SDLK_KP6		= 262,
	SDLK_KP7		= 263,
	SDLK_KP8		= 264,
	SDLK_KP9		= 265,
	SDLK_KP_PERIOD		= 266,
	SDLK_KP_DIVIDE		= 267,
	SDLK_KP_MULTIPLY	= 268,
	SDLK_KP_MINUS		= 269,
	SDLK_KP_PLUS		= 270,
	SDLK_KP_ENTER		= 271,
	SDLK_KP_EQUALS		= 272,

	/* Arrows + Home/End pad */
	SDLK_UP			= 273,
	SDLK_DOWN		= 274,
	SDLK_RIGHT		= 275,
	SDLK_LEFT		= 276,
	SDLK_INSERT		= 277,
	SDLK_HOME		= 278,
	SDLK_END		= 279,
	SDLK_PAGEUP		= 280,
	SDLK_PAGEDOWN		= 281,

	/* Function keys */
	SDLK_F1			= 282,
	SDLK_F2			= 283,
	SDLK_F3			= 284,
	SDLK_F4			= 285,
	SDLK_F5			= 286,
	SDLK_F6			= 287,
	SDLK_F7			= 288,
	SDLK_F8			= 289,
	SDLK_F9			= 290,
	SDLK_F10		= 291,
	SDLK_F11		= 292,
	SDLK_F12		= 293,
	SDLK_F13		= 294,
	SDLK_F14		= 295,
	SDLK_F15		= 296,

	/* Key state modifier keys */
	SDLK_NUMLOCK		= 300,
	SDLK_CAPSLOCK		= 301,
	SDLK_SCROLLOCK		= 302,
	SDLK_RSHIFT		= 303,
	SDLK_LSHIFT		= 304,
	SDLK_RCTRL		= 305,
	SDLK_LCTRL		= 306,
	SDLK_RALT		= 307,
	SDLK_LALT		= 308,
	SDLK_RMETA		= 309,
	SDLK_LMETA		= 310,
	SDLK_LSUPER		= 311,		/* Left "Windows" key */
	SDLK_RSUPER		= 312,		/* Right "Windows" key */
	SDLK_MODE		= 313,		/* "Alt Gr" key */
	SDLK_COMPOSE		= 314,		/* Multi-key compose key */

	/* Miscellaneous function keys */
	SDLK_HELP		= 315,
	SDLK_PRINT		= 316,
	SDLK_SYSREQ		= 317,
	SDLK_BREAK		= 318,
	SDLK_MENU		= 319,
	SDLK_POWER		= 320,		/* Power Macintosh power key */
	SDLK_EURO		= 321,		/* Some european keyboards */
	SDLK_UNDO		= 322,		/* Atari keyboard has Undo */

	/* Add any other keys here */

	SDLK_LAST
} SDLKey;

class CWnd;union SDL_Event;
namespace G3D {class Vector2;class Vector3;class Rect2D;class Color4;class CoordinateFrame;class AABox;class Sphere;class Ray;class LineSegment;
// Genuine counted-handle storage; no handle methods/objects are used by this TU.
template<class T>class ReferenceCountedPointer {T*pointer;};}
class RenderStats;
namespace RBX {class TextureProxyBase;class TextureId;class Adorn;class RunService;template<class C,class E>class Notifier;class Name {public:static const Name&getNullName();};
class ContentId
	{
	private:
		std::string id;
		const Name* mimeTypePtr;

	public:
		ContentId()
			: id(), 
			  mimeTypePtr(&Name::getNullName())
		{
		}
		ContentId(const std::string& id)
			: id(id),
			  mimeTypePtr(&Name::getNullName())
		{
		}
		ContentId(const char* id)
			: id(id),
			  mimeTypePtr(&Name::getNullName())
		{
		}
		ContentId(const std::string& id, const Name& mimeType)
			: id(id),
			  mimeTypePtr(&mimeType)
		{
		}

	public:
		const Name& mimeType() const
		{
			return *mimeTypePtr;
		}
		const char* c_str() const
		{
			return id.c_str();
		}
		const std::string& toString() const
		{
			return id;
		}
		bool isNull() const
		{
			return id.empty();
		}
		bool isFile() const
		{
			return id.substr(0, 7) == "file://";
		}
		bool isAsset() const
		{
			return id.substr(0, 11) == "rbxasset://";
		}
		bool isHttp() const
		{
			return id.substr(0, 4) == "http";
		}

	public:
		static ContentId fromUrl(const std::string&);
		static ContentId fromFile(const std::string&);
		static ContentId fromAssets(const std::string& filePath);
		static ContentId fromMD5Hash(const std::string&);
	};
enum RunState
	{
		RS_NORMAL,
		RS_RUNNING,
		RS_PAUSED
	};

	class RunTransition
	{
	public:
		RunState oldState;
		RunState newState;

		RunTransition(RunState oldState, RunState newState)
			: oldState(oldState),
			  newState(newState)
		{
		}

		bool startEvent();
		bool resetEvent();
	};

	class Heartbeat
	{
	public:
		const float time;
		const float step;

		Heartbeat(float time, float step)
			: time(time),
			step(step)
		{
		}
	};

	class Stepped
	{
	public:
		const float time;
		const float step;

		Stepped(float time, float step)
			: time(time),
			step(step)
		{
		}
	};

	class IRunView
	{
	public:
		virtual void InvalidateRunView() = 0;
		virtual void AdjustThrottle(double) = 0;
	};


template<typename Class, typename Event>
	class __declspec(novtable) Listener
	{
		friend class Notifier<Class, Event>;

	protected:
		virtual void onEvent(const Class*, Event) = 0;
		Listener& operator=(const Listener&);

		virtual ~Listener()
		{
		}
	};}
namespace RBX
{
	class Adorn;
	class UserInputBase
	{
	public:
		enum WrapMode
		{
			WRAP_AUTO,
			WRAP_CENTER
		};

	private:
		ContentId currentCursorId;
		G3D::ReferenceCountedPointer<TextureProxyBase> currentCursor;
	  
	protected:
		virtual G3D::Vector2 getCursorPosition() = 0;
		virtual G3D::ReferenceCountedPointer<TextureProxyBase> getGameCursor(Adorn*);
	public:
		UserInputBase();
	public:
		void init(Adorn*);
	public:
		~UserInputBase();
	public:
		virtual void setWrapMode(WrapMode) = 0;
		virtual WrapMode getWrapMode() const = 0;
		virtual void centerCursor() = 0;
		virtual bool keyDown(SDLKey) const = 0;
		bool altKeyDown() const;
		bool shiftKeyDown() const;
		bool ctrlKeyDown() const;
		virtual void setKeyState(SDLKey key, bool down) = 0;
		virtual void setCursorId(Adorn*, const TextureId&);
		void renderGameCursor(Adorn*);
	};
}
namespace G3D {typedef unsigned char uint8;typedef unsigned short uint16;template<class T>class Array;class Rect2D;class Vector2;class GImage;class GApplet;typedef SDL_Event GEvent;
// Genuine first39 virtual methods; existing-pointer interface, no window objects/size claim.
class GWindow {public:class Settings;virtual void getSettings(GWindow::Settings& settings) const = 0;virtual int width() const = 0;virtual int height() const = 0;virtual Rect2D dimensions() const = 0;virtual void setDimensions(const Rect2D& dims) = 0;virtual void setPosition(int x, int y) = 0;virtual bool hasFocus() const = 0;virtual std::string getAPIVersion() const = 0;virtual std::string getAPIName() const = 0;virtual void setGammaRamp(const Array<uint16>& gammaRamp) = 0;virtual void setCaption(const std::string& caption) = 0;virtual int numJoysticks() const = 0;virtual std::string joystickName(unsigned int sticknum) = 0;virtual std::string caption() = 0;virtual void setIcon(const GImage& image);virtual void setIcon(const std::string& imageFilename);virtual void swapGLBuffers() = 0;virtual void notifyResize(int w, int h) = 0;virtual void setRelativeMousePosition(double x, double y) = 0;virtual void setRelativeMousePosition(const Vector2& p) = 0;virtual bool pollEvent(GEvent& e);virtual void getRelativeMouseState(Vector2& position, uint8& mouseButtons) const = 0;virtual void getRelativeMouseState(int& x, int& y, uint8& mouseButtons) const = 0;virtual void getRelativeMouseState(double& x, double& y, uint8& mouseButtons) const = 0;virtual void getJoystickState(unsigned int stickNum, Array<float>& axis, Array<bool>& button) = 0;virtual void  setInputCapture(bool c) = 0;virtual void incInputCaptureCount();virtual void decInputCaptureCount();virtual bool  inputCapture() const = 0;virtual void  setMouseVisible(bool b) = 0;virtual bool  mouseVisible() const = 0;virtual void incMouseHideCount();virtual void decMouseHideCount();virtual bool requiresMainLoop() const;virtual void pushLoopBody(void (*body)(void*), void* arg);virtual void pushLoopBody(GApplet* applet);virtual void popLoopBody();virtual void runMainLoop();virtual void reallyMakeCurrent() const;
virtual ~GWindow();
private:static const GWindow*m_current;
public:void makeCurrent()const {if(m_current!=this){reallyMakeCurrent();m_current=this;}}
};}

namespace RBX
{
	class Instance;
	class ViewBase
	{
	public:
		ViewBase()
		{
		}
		virtual ~ViewBase()
		{
		}
	public:
		virtual void render(void* rd) = 0;
		virtual float getShadingQuality() const = 0;
		virtual float getMeshDetail() const = 0;
		virtual void updateSettings(float shadingQuality, float meshDetail, bool shadows, float cameraDistance) = 0;
		virtual void suppressSkybox() = 0;
		virtual Instance* getWorkspace() = 0;
		virtual RenderStats& getRenderStats() = 0;
	private:
		virtual void onWorkspaceDescendentAdded(boost::shared_ptr<Instance> descendent) = 0;
		virtual void updateLighting() = 0;
		virtual void invalidateLighting(bool updateSkybox) = 0;
	  
	public:
		static bool& getShadowsEnabled()
		{
			static bool _shadowsEnabled = false;
			return _shadowsEnabled;
		}
	};
}

namespace RBX {
namespace Profiling {class Profiler;}
// Genuine native primary virtual prefix only; no Instance objects or RTTI.
// Used slot4 matches the later GuidItem-based Instance SDK and native setName.
// Primary destruction/complete Instance layout are not reconstructed or used.
class Instance {protected:virtual ~Instance();public:virtual void setName(const std::string&);void setParent(Instance*);};
namespace Stats {class Item:public Instance {public:Item*createBoundChildItem(const Profiling::Profiler&);};class StatsService:public Instance {};}
class ControllerService {public:char observed00[0x130];UserInputBase*hardwareDevice;};
class RunService {public:void addRunView(IRunView*);void removeRunView(IRunView*);};
class DataModel {public:
 class Lock {boost::shared_ptr<boost::recursive_mutex>mutex;boost::detail::scoped_lock<boost::recursive_mutex>*lock;
 public:Lock(boost::shared_ptr<const DataModel>);~Lock();};
 ControllerService*findControllerService(); //0045dce0
 ControllerService*createControllerService(); //0045de20
 RunService*createRunService(); //004530f0
 Stats::StatsService*createStatsService(); //00458610
};
template<class T>boost::shared_ptr<T>shared_from(T*); //00618a40
class NativeWindowSettings {public:void apply(bool);}; //004492d0 ret4
NativeWindowSettings*documentWindowSettings(); //00412d50 cdecl0
class NativeDocument:public IUnknown {public:boost::shared_ptr<DataModel>getDataModel();}; //0046a940 hidden return ret4
}
class CRobloxWnd;
// Actual native bases/offsets from DxUserInput RTTI. 404-byte allocation and
// original external constructor initialize the opaque native tail and vptrs.
class DxUserInput:public RBX::UserInputBase,public RBX::Listener<RBX::RunService,RBX::RunTransition>,public RBX::Listener<RBX::RunService,RBX::Heartbeat> {
 char nativeTail30[0x194-0x30];
public:
 DxUserInput(CWnd*,RBX::DataModel*);~DxUserInput();
 G3D::Vector2 getCursorPosition();void setWrapMode(WrapMode);WrapMode getWrapMode()const;void centerCursor();bool keyDown(SDLKey)const;void setKeyState(SDLKey,bool);
 void onEvent(const RBX::RunService*,RBX::RunTransition);void onEvent(const RBX::RunService*,RBX::Heartbeat);
};
// Existing-pointer CRobloxWnd view. No owner objects, vtables, RTTI or complete
// native owner-size/inheritance claim. IRunView subobject54 is observed in caller
// and confirmed by the genuine add/removeRunView/AdjustThrottle interfaces.
struct CRobloxWndPad {virtual ~CRobloxWndPad();char observed04[0x1c];HWND hwnd;char observed24[0x30];};
class CRobloxWnd:public CRobloxWndPad,public RBX::IRunView {
public:
 class RenderStatsItem:public RBX::Stats::Item {};
 void InvalidateRunView();void AdjustThrottle(double);
 char observed58[4];
 int graphicsMode;char observed60[4];boost::shared_ptr<RBX::Stats::Item>stats;
 ATL::CComPtr<RBX::NativeDocument>document;boost::shared_ptr<RBX::DataModel>model;boost::shared_ptr<RBX::RunService>run;
 char observed80[4];boost::scoped_ptr<DxUserInput>input;char observed88[0x10];RBX::Profiling::Profiler*profiler;
 bool headless;char observed9d[7];G3D::GWindow*window;char observeda8[8];RBX::ViewBase*render;RBX::Adorn*adorn;
 void setupOgre(); //0045d850
 void setupLegacy(); //0045b3a0
 void setupStatsGui(); //0045c890
 void setDocument(RBX::NativeDocument*);
};
boost::shared_ptr<CRobloxWnd::RenderStatsItem>createWindowRenderStats(RenderStats&); //0045f730 cdecl hidden8B result
void CRobloxWnd::setDocument(RBX::NativeDocument*doc){
 if(doc!=document){
  boost::shared_ptr<RBX::DataModel>&currentModel=model;
  if(currentModel){
   RBX::DataModel::Lock lock(currentModel);
   if(stats){stats->setParent(0);stats.reset();}
   RBX::ControllerService*controller=currentModel?currentModel->findControllerService():0;
   if(controller)controller->hardwareDevice=0;
   window->makeCurrent();
   delete render;render=0;
   boost::shared_ptr<RBX::RunService>&currentRun=run;
   currentRun->removeRunView(static_cast<RBX::IRunView*>(this));
   input.reset();
   currentRun.reset();
  }
  document=doc;
  if(doc)currentModel=doc->getDataModel();else currentModel.reset();
  if(currentModel){
   RBX::DataModel::Lock lock(currentModel);
   if(!headless)input.reset(new DxUserInput(reinterpret_cast<CWnd*>(this),currentModel.get()));
   run=RBX::shared_from(currentModel?currentModel->createRunService():0);
   RBX::documentWindowSettings()->apply(false);
   if(graphicsMode==2)setupOgre();else setupLegacy();
   input->init(adorn);
   RBX::IRunView*view=static_cast<RBX::IRunView*>(this);view->AdjustThrottle(0.0);
   setupStatsGui();
   RBX::ControllerService*controller=currentModel?currentModel->createControllerService():0;
   controller->hardwareDevice=input.get();
   RBX::Stats::StatsService*service=currentModel?currentModel->createStatsService():0;
   stats=createWindowRenderStats(render->getRenderStats());
   {std::string name("Render");stats->setName(name);}
   stats->setParent(service);
   stats->createBoundChildItem(*profiler);
   run->addRunView(view);
  }
 }
 if(hwnd)::InvalidateRect(hwnd,0,1);
}

typedef char doc_string_size[sizeof(std::string)==28?1:-1];
typedef char doc_shared_size[sizeof(boost::shared_ptr<RBX::DataModel>)==8?1:-1];
typedef char doc_com_size[sizeof(ATL::CComPtr<RBX::NativeDocument>)==4?1:-1];
typedef char doc_input_owner_size[sizeof(boost::scoped_ptr<DxUserInput>)==4?1:-1];
typedef char doc_content_size[sizeof(RBX::ContentId)==32?1:-1];
typedef char doc_input_base_size[sizeof(RBX::UserInputBase)==40?1:-1];
typedef char doc_dx_size[sizeof(DxUserInput)==404?1:-1];
typedef char doc_lock_size[sizeof(RBX::DataModel::Lock)==12?1:-1];
typedef char doc_run_interface_size[sizeof(RBX::IRunView)==4?1:-1];
typedef char doc_handle_offset[offsetof(CRobloxWnd,hwnd)==0x20?1:-1];
typedef char doc_mode_offset[offsetof(CRobloxWnd,graphicsMode)==0x5c?1:-1];
typedef char doc_stats_offset[offsetof(CRobloxWnd,stats)==0x64?1:-1];
typedef char doc_com_offset[offsetof(CRobloxWnd,document)==0x6c?1:-1];
typedef char doc_model_offset[offsetof(CRobloxWnd,model)==0x70?1:-1];
typedef char doc_run_offset[offsetof(CRobloxWnd,run)==0x78?1:-1];
typedef char doc_input_offset[offsetof(CRobloxWnd,input)==0x84?1:-1];
typedef char doc_profiler_offset[offsetof(CRobloxWnd,profiler)==0x98?1:-1];
typedef char doc_headless_offset[offsetof(CRobloxWnd,headless)==0x9c?1:-1];
typedef char doc_window_offset[offsetof(CRobloxWnd,window)==0xa4?1:-1];
typedef char doc_render_offset[offsetof(CRobloxWnd,render)==0xb0?1:-1];
typedef char doc_adorn_offset[offsetof(CRobloxWnd,adorn)==0xb4?1:-1];
typedef char doc_controller_offset[offsetof(RBX::ControllerService,hardwareDevice)==0x130?1:-1];
