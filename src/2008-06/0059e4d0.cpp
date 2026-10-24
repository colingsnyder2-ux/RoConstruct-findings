// from server: 81% by king_originala
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// Native openrbx GuidItem/Instance virtual hierarchy and target RTTI establish these ABI views.
// Native Events, CopyOnWrite, Boost and STL operations preserve notification/ownership lifetimes.
// Unused native APIs are omitted; all accessed member offsets are compile-asserted.
#include <string>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <intrin.h>
#include <utility>
#include <stddef.h>
#include <ostream>
namespace boost {
namespace detail {
struct sp_counted_base {
    sp_counted_base():use_count_(1),weak_count_(1){}
    virtual ~sp_counted_base() {}
    virtual void dispose()=0;
    virtual void destroy(){delete this;}
    long use_count_,weak_count_;
    void weak_release(){if(_InterlockedDecrement(&weak_count_)==0)destroy();}
    void release(){if(_InterlockedDecrement(&use_count_)==0){dispose();weak_release();}}
};
template<class Y>struct sp_counted_impl_p:sp_counted_base {Y*pointer;explicit sp_counted_impl_p(Y*p):pointer(p){}void dispose(){delete pointer;}};
struct shared_count {
    sp_counted_base* pi_;
    shared_count():pi_(0){}
    
    shared_count& operator=(const shared_count& r){sp_counted_base* tmp=r.pi_;if(tmp!=pi_){if(tmp)_InterlockedIncrement(&tmp->use_count_);if(pi_)pi_->release();pi_=tmp;}return *this;}
    void swap(shared_count& r){sp_counted_base* tmp=r.pi_;r.pi_=pi_;pi_=tmp;}
    shared_count(const shared_count& r):pi_(r.pi_){if(pi_)_InterlockedIncrement(&pi_->use_count_);}
    ~shared_count(){if(pi_)pi_->release();}
};
}
namespace detail {inline void sp_enable_shared_from_this(const shared_count&,...) {}}
template<class T> class shared_ptr {
public:
    T* px; detail::shared_count pn;
    shared_ptr():px(0),pn(){}
    
    shared_ptr& operator=(const shared_ptr& r){px=r.px;pn=r.pn;return *this;}
    void swap(shared_ptr& r){std::swap(px,r.px);pn.swap(r.pn);}
    void reset(){shared_ptr().swap(*this);}
    typedef T* shared_ptr::*unspecified_bool_type;
    operator unspecified_bool_type()const{return px==0?0:&shared_ptr::px;}
    __declspec(noinline) shared_ptr(const shared_ptr& r):px(r.px),pn(r.pn){}
    template<class Y> __declspec(noinline) shared_ptr(const shared_ptr<Y>& r):px(r.px),pn(r.pn){}
    T* get()const{return px;}
    T* operator->()const{return px;}
};
template<class T,class U> bool operator==(const shared_ptr<T>& a,const shared_ptr<U>& b){return a.get()==b.get();}
}




namespace boost {
namespace noncopyable_ {class noncopyable {protected:noncopyable(){}~noncopyable(){}private:noncopyable(const noncopyable&);const noncopyable&operator=(const noncopyable&);};}typedef noncopyable_::noncopyable noncopyable;
template<class T>struct weak_ptr {T*px;void*count;};
template<class T>struct enable_shared_from_this {weak_ptr<T>weak_this;shared_ptr<T>shared_from_this();};
}
namespace G3D {std::string __cdecl format(const char*,...);}
namespace RBX {
struct Name;class Instance;struct XmlElement;struct IReferenceBinder;struct ServiceProvider;
struct Guid:boost::noncopyable {const Name*scope;int index;};
template<class T>struct GuidItem {virtual ~GuidItem();bool registeredGuid;Guid guid;};
struct Object {virtual ~Object();};template<class T>struct Creatable:Object{};
template<class T>struct AbstractFactoryProduct:Creatable<T> {virtual const Name&getClassName()const=0;};
namespace Reflection {
class PropertyDescriptor;struct SignalSource {virtual ~SignalSource();void*signals;};
struct DescribedBase:SignalSource {void*descriptor;};
struct ChildSignal {void fire(SignalSource*,boost::shared_ptr<Instance>)const;};
}
struct Debugable {virtual void dump(std::ostream&);};
struct RaiseRange;
template<class T,class Event>struct Listener;
template<class T,class Event>struct Notifier {
 virtual ~Notifier();std::vector<Listener<T,Event>*>listeners;RaiseRange*range;
 virtual void onAddListener(Listener<T,Event>*)const;virtual void onRemoveListener(Listener<T,Event>*)const;
 __declspec(nothrow) void raise(Event)const;
};
template<class T>boost::shared_ptr<T> __cdecl shared_from(T*);
struct ChildAdded {const boost::shared_ptr<Instance>child;ChildAdded(Instance*p):child(shared_from(p)){}};
struct ChildRemoved {const boost::shared_ptr<Instance>child;ChildRemoved(Instance*p):child(shared_from(p)){}};
struct DescendentAdded;struct DescendentRemoving;struct PropertyChanged;
struct AncestorChanged {Instance*const child;Instance*const oldParent;Instance*const newParent;AncestorChanged(Instance*c,Instance*o,Instance*n):child(c),oldParent(o),newParent(n){}};
template<class T>struct Association {struct Item;std::vector<Item*>items;};
template<class T>struct CopyOnWrite:boost::noncopyable {
 boost::shared_ptr<T>object;
 operator typename boost::shared_ptr<T>::unspecified_bool_type()const{return object;}
 const T*operator->()const{return object.get();}boost::shared_ptr<T>&write();void reset();
};
class Instance:public GuidItem<Instance>,public AbstractFactoryProduct<Instance>,public Reflection::DescribedBase,public Debugable,
 public Notifier<Instance,ChildAdded>,public Notifier<Instance,ChildRemoved>,public Notifier<Instance,DescendentAdded>,public Notifier<Instance,DescendentRemoving>,public Notifier<Instance,AncestorChanged>,public Notifier<Instance,PropertyChanged>,public boost::enable_shared_from_this<Instance>,public boost::noncopyable {public:
 virtual ~Instance();virtual void setName(const std::string&);
 virtual bool askAddChild(const Instance*)const;virtual bool askSetParent(const Instance*)const;
 virtual void onAncestorChanged(const AncestorChanged&);virtual void onDescendentAdded(Instance*);virtual void onDescendentRemoving(const boost::shared_ptr<Instance>&);
 virtual void onChildAdded(Instance*);virtual void onChildRemoving(Instance*);virtual void onChildRemoved(Instance*);virtual void onLastChildRemoved();
 virtual void readProperty(const XmlElement*,IReferenceBinder&);virtual void onServiceProvider(const ServiceProvider*,const ServiceProvider*);virtual boost::shared_ptr<Instance>createChild(const Name&);virtual XmlElement*write();virtual void onChildChanged(Instance*,const PropertyChanged&);
 Association<Instance>assoc;Instance*parent;CopyOnWrite<std::vector<boost::shared_ptr<Instance> > >children;std::string name;bool archivable;
 static Reflection::ChildSignal event_childAdded,event_childRemoved;static const Reflection::PropertyDescriptor propParent;
 std::string getFullName()const;bool isAncestorOf(const Instance*)const;bool contains(const Instance*child)const;
 unsigned numChildren()const{return children?children->size():0;}
 static void signalDescendentRemoving(const boost::shared_ptr<Instance>&,Instance*,Instance*);static void signalDescendentAdded(Instance*,Instance*,Instance*);
 void raisePropertyChanged(const Reflection::PropertyDescriptor&);void setParent(Instance*);
};
}

// Genuine used G3D declarations and inline operations; unused APIs omitted.
namespace G3D {
class Vector2;class Rect2D;class Ray;class LineSegment;class Color3uint8;class Color4uint8;
class Vector3 {public:float x,y,z;
 Vector3():x(0),y(0),z(0){}Vector3(float X,float Y,float Z):x(X),y(Y),z(Z){}
 Vector3(const Vector3&v):x(v.x),y(v.y),z(v.z){}
 Vector3&operator=(const Vector3&v){x=v.x;y=v.y;z=v.z;return *this;}
 Vector3 operator-()const{return Vector3(-x,-y,-z);}
 Vector3 operator*(float f)const{return Vector3(x*f,y*f,z*f);}
 static const Vector3&zero(){static Vector3 v(0,0,0);return v;}
 static const Vector3&one(){static Vector3 v(1,1,1);return v;}
};
class Matrix3 {float elt[3][3];public:Matrix3(){}Matrix3(const Matrix3&);static const Matrix3&identity();};
class CoordinateFrame {public:Matrix3 rotation;Vector3 translation;
 CoordinateFrame():rotation(Matrix3::identity()),translation(Vector3::zero()){}
 CoordinateFrame(const Vector3&t):rotation(Matrix3::identity()),translation(t){}
 CoordinateFrame(const CoordinateFrame&v):rotation(v.rotation),translation(v.translation){}
};
class Color3 {public:float r,g,b;Color3(){}Color3(float R,float G,float B):r(R),g(G),b(B){}
 Color3(const Color3&v):r(v.r),g(v.g),b(v.b){}Color3&operator=(const Color3&v){r=v.r;g=v.g;b=v.b;return *this;}
 static const Color3&red();static const Color3&green();static const Color3&purple();static const Color3&orange();static const Color3&yellow();static const Color3&gray();
};
class Color4 {public:float r,g,b,a;Color4(){}Color4(const Color3&v,float A=1):r(v.r),g(v.g),b(v.b),a(A){}
 Color4(const Color4&v):r(v.r),g(v.g),b(v.b),a(v.a){}
 static const Color4&clear();
};
class Sphere {static int dummy;public:Vector3 center;float radius;
 Sphere(const Vector3&c,float r){center=c;radius=r;}virtual ~Sphere(){}virtual std::string toString()const;
};
class AABox {Vector3 lo,hi;public:AABox(const Vector3&l,const Vector3&h){lo=l;hi=h;}};
class ReferenceCountedObject {protected:int ReferenceCountedObject_refCount;class _WeakPtrLinkedList*ReferenceCountedObject_weakPointer;public:virtual ~ReferenceCountedObject();};
template<class T>class ReferenceCountedPointer {T*m_pointer;};
}
namespace boost {template<class T>class scoped_ptr {T*ptr;scoped_ptr(const scoped_ptr&);scoped_ptr&operator=(const scoped_ptr&);public:explicit scoped_ptr(T*p=0);~scoped_ptr();T*get()const{return ptr;}};}
namespace RBX {using G3D::Vector3;using G3D::CoordinateFrame;using G3D::Ray;using G3D::Color3;using boost::shared_ptr;
class PartInstance;class Primitive;class Extents;class World;class Adorn;class XmlState;
namespace Reflection {class ClassDescriptor;template<class C,class T>class PropDescriptor;template<class C,class T>class EnumPropDescriptor;
// Exact dataless Described layer; only unused constructor bodies omitted.
template<class C,const char*N,class B>class __declspec(novtable) Described:public B {public:Described();template<class U>Described(U*);static ClassDescriptor&classDescriptor();};
}
// Genuine dataless factory/descriptor inheritance, with native getClassName API.
template<class T,class B,const char*N>class FactoryProduct:public B {protected:FactoryProduct();template<class U>FactoryProduct(U);public:virtual ~FactoryProduct();virtual const Name&getClassName()const;};
template<class T,class B,const char*N>class DescribedCreatable:public Reflection::Described<T,N,FactoryProduct<T,B,N> > {protected:DescribedCreatable();template<class U>DescribedCreatable(U);};
}
namespace RBX {
enum NormalId
{
	NORM_X = 0,
	NORM_Y = 1,
	NORM_Z = 2,
	NORM_X_NEG = 3,
	NORM_Y_NEG = 4,
	NORM_Z_NEG = 5,
	NORM_UNDEFINED = 6,
};
enum SurfaceType
{
	NO_SURFACE = 0,
	GLUE = 1,
	WELD = 2,
	STUDS = 3,
	INLET = 4,
	SPAWN_deprecated = 5,
	ROTATE = 6,
	ROTATE_V = 7,
	ROTATE_P = 8,
	NUM_SURF_TYPES = 9,
};
}
namespace RBX {
class __declspec(novtable) Controller : public G3D::ReferenceCountedObject
{
public:
	enum ControllerType
	{
		NO_CONTROLLER = 0,
		PRIMARY_CONTROLLER = 1,
		SECONDARY_CONTROLLER = 2,
		PAD_ONE_CONTROLLER = 3,
		PAD_TWO_CONTROLLER = 4,
		AI_CHASE_CONTROLLER = 5,
		AI_FLEE_CONTROLLER = 6,
		PLAYER_CONTROLLER = 7,
		NUM_CONTROLLER_TYPES = 8,
	};

	enum InputType
	{
		NO_INPUT = 0,
		LEFT_TRACK_INPUT = 1,
		RIGHT_TRACK_INPUT = 2,
		RIGHT_LEFT_INPUT = 3,
		BACK_FORWARD_INPUT = 4,
		STRAFE_INPUT = 5,
		UP_DOWN_INPUT = 6,
		BUTTON_1_INPUT = 7,
		BUTTON_2_INPUT = 8,
		BUTTON_3_INPUT = 9,
		BUTTON_4_INPUT = 10,
		BUTTON_3_4_INPUT = 11,
		CONSTANT_INPUT = 12,
		SIN_INPUT = 13,
		NUM_INPUT_TYPES = 14,
	};

	
	virtual ~Controller() {} 

	virtual float getValue(InputType inputType) const;    
	virtual ControllerType getControllerType() const = 0; 
	virtual bool hasIntelligence() const = 0;             
	virtual bool isUserController() const = 0;            

	bool isNullController();

	static bool isControllableInput(InputType inputType);
	static Color3 controllerTypeToColor(ControllerType controllerType);
};
}
namespace RBX {
template<class T,class Class>
class ComputeProp
{
public:
	typedef T (Class::*GetFunc)() const;

	ComputeProp(Class* object, GetFunc getFunc) : dirty(true), object(object), getFunc(getFunc) {}

	
	
	
	
	
	
	T getValue() const
	{
		if (dirty) {
			val = (object->*getFunc)();
			dirty = false;
		}

		return val;
	}

	operator T() const { return getValue(); }

	T* getValuePointer() const
	{
		getValue();
		return &val;
	}

	T& getValueRef() const
	{
		getValue();
		return val;
	}

	bool setDirty() const
	{
		dirty = true;
		return dirty;
	}

private:
	mutable T val;      
	mutable bool dirty; 
	Class* object;      
	GetFunc getFunc;    
};
}
template<class T>
class Vector6
{
	T data[6];

public:
	Vector6(const T& value)
	{
		for (int i = 0; i < 6; ++i) {
			data[i] = value;
		}
	}

	Vector6() {}

	T& operator[](int index) { return data[index]; }

	const T& operator[](int index) const { return data[index]; }
};
namespace RBX {
class __declspec(novtable) IPrimaryPart
{
public:
	virtual PartInstance* getPrimaryPart() = 0;                  
	virtual const PartInstance* getPrimaryPartConst() const = 0; 
};
}
namespace RBX {
class __declspec(novtable) ILocation
{
public:
	virtual const CoordinateFrame getLocation() const = 0; 
};
}
namespace RBX {
class __declspec(novtable) IControllable
{
public:
	virtual ~IControllable() {}              
	virtual bool isControllable() const = 0; 
};
}
namespace RBX {class IRenderableBucket;enum SelectState{SELECT_NORMAL,SELECT_LIMIT};}
namespace RBX {
class __declspec(novtable) IRenderable
{
protected:
	virtual bool shouldRender2d() const { return false; }      
	virtual bool shouldRender3dAdorn() const { return false; } 

public:
	virtual void render2d(Adorn* adorn) {}                                
	virtual void render3dAdorn(Adorn* adorn) {}                           
	virtual void render3dSelect(Adorn* adorn, SelectState selectState) {} 

	IRenderable() : index2d(-1), index3d(-1), bucket(NULL) {}

	~IRenderable();

	void shouldRenderSetDirty();

private:
	int index2d; 
	int index3d; 

	int& indexFunc2d() { return index2d; }
	int& indexFunc3d() { return index3d; }

	IRenderableBucket* bucket; 

	friend class IRenderableBucket;
};
}
namespace RBX {
class __declspec(novtable) ICameraSubject : public virtual ILocation
{
public:
	virtual ~ICameraSubject() {} 

	virtual void onCameraNear(float distance) {} 

	virtual void getCameraIgnorePrimitives(std::vector<const Primitive*>& primitives) {} 

	virtual float getLerp() const { return 0.9f; } 

	virtual bool zoom(const float zoom, CoordinateFrame& goal, CoordinateFrame& focus) 
	{
		return false;
	}

	virtual void stepGoalAndFocus(CoordinateFrame& goal, CoordinateFrame& focus, bool zoom);
};
}
namespace RBX {
class ISelectable3d
{
};
}
namespace RBX {class IMovingManager;}
namespace RBX {
class __declspec(novtable) IMoving
{
protected:
	virtual void onCanAggregateChanged(bool value) = 0; 

public:
	IMoving();

	virtual bool reportTouches() const = 0; 

	void notifyMoved();

	bool getCanAggregate() const { return stepsToSleep == 0; }

protected:
	bool checkSleep();

	void setMovingManager(IMovingManager* value);

private:
	void makeMoving();

	IMovingManager* iMovingManager; 
	int stepsToSleep;               

	friend class IMovingManager;
};
}
namespace RBX {extern const char sPVInstance[];
class __declspec(novtable) PVInstance : public Reflection::Described<PVInstance, sPVInstance, Instance>,
										public IControllable,
										public virtual IPrimaryPart,
										public virtual ILocation
{
protected:
	ComputeProp<bool, PVInstance> IsControllable;                                      
	ComputeProp<bool, PVInstance> IsTopFlag;                                           
	ComputeProp<G3D::ReferenceCountedPointer<Controller>, PVInstance> TopPVController; 

private:
	bool computeIsControllable() const;
	bool computeIsTopFlag() const;
	G3D::ReferenceCountedPointer<Controller> computeTopPVController() const;
	void dirtyAll();

	bool canSelect;                            
	Controller::ControllerType controllerType; 
	bool showControllerFlag;                   

protected:
	boost::scoped_ptr<CoordinateFrame> legacyOffset; 

	PVInstance(const char* name);

public:
	virtual ~PVInstance();

	
	Controller::ControllerType getControllerType() const { return controllerType; }
	void setControllerType(Controller::ControllerType _control);

	
	bool getShowControllerFlag() const { return showControllerFlag; }

	void setShowControllerFlag(bool value);

	static const Reflection::EnumPropDescriptor<PVInstance, Controller::ControllerType> prop_ControllerType;

protected:
	virtual unsigned int topHashCode() const;   
	virtual unsigned int childHashCode() const; 

	virtual void onChildAdded(Instance* child);
	virtual void onChildRemoving(Instance* child);
	virtual void onDescendentAdded(Instance* instance);
	virtual void onDescendentRemoving(const shared_ptr<Instance>& instance);
	virtual void readProperty(const XmlElement* propertyElement, IReferenceBinder& binder);

public:
	virtual bool isControllable() const;

protected:
	void renderCoordinateFrame(Adorn* adorn);
	void onControllerChanged();

	virtual void onChildControllerChanged();  
	virtual void onParentControllerChanged(); 
	virtual void onExtentsChanged() const;    

public:
	void moveToPoint(G3D::Vector3 point);
	Controller* getTopPVController() const;
	bool isChaseable() const;

	virtual Extents getExtentsWorld() const = 0;                           
	virtual Extents getExtentsLocal() const = 0;                           
	virtual const Primitive* getBiggestPrimitive() const = 0;              
	virtual bool hitTest(const G3D::Ray& ray, G3D::Vector3& hitPoint) = 0; 

	void writeCoordinateFrameData(XmlState* state);
	void writeVelocityData(XmlState* state);

	const PVInstance* getTopLevelPVParent() const;
	PVInstance* getTopLevelPVParent();

	bool isTopLevelPVInstance() const;

	void setPVGridOffsetLegacy(const CoordinateFrame& value);
	CoordinateFrame* getLegacyOffset();
	void clearLegacyOffset();

	virtual void legacyTraverseState(const CoordinateFrame& state) = 0; 
};
}
namespace RBX {
class Surface
{
private:
	PartInstance* partInstance; 
	NormalId surfId;            

public:
	Surface(PartInstance* partInstance, NormalId surfId);

	SurfaceType getSurfaceType() const;
	void setSurfaceType(SurfaceType type);

	Controller::InputType getInput() const;
	void setSurfaceInput(Controller::InputType value);

	float getParamA() const;
	void setParamA(float value);

	float getParamB() const;
	void setParamB(float value);

	bool isControllable() const;
};
}
namespace RBX {
class Surfaces : public boost::noncopyable
{
private:
	Surface Top;    
	Surface Bottom; 
	Surface Left;   
	Surface Right;  
	Surface Front;  
	Surface Back;   

public:
	static const bool isSurfaceDescriptor(const Reflection::PropertyDescriptor& desc);

	Surfaces(PartInstance* partInstance);

	Surface& operator[](NormalId normalId);
	const Surface& operator[](NormalId normalId) const;

	
	Vector6<SurfaceType> surf6() const
	{
		Vector6<SurfaceType> answer;

		for (int i = 0; i < 6; i++) {
			answer[i] = (*this)[static_cast<NormalId>(i)].getSurfaceType();
		}

		return answer;
	}

	const Reflection::PropertyDescriptor& getSurfaceType(NormalId normalId) const;
	const Reflection::PropertyDescriptor& getSurfaceInput(NormalId normalId) const;
	const Reflection::PropertyDescriptor& getParamA(NormalId normalId) const;
	const Reflection::PropertyDescriptor& getParamB(NormalId normalId) const;

	const bool isStandardPart() const;
};
}
namespace RBX {
class BrickColor
{
public:
	enum Number
	{
		lego_1 = 1,
		lego_2 = 2,
		lego_3 = 3,
		lego_5 = 5,
		lego_6 = 6,
		lego_9 = 9,
		lego_11 = 11,
		lego_12 = 12,
		lego_18 = 18,
		lego_21 = 21,
		lego_22 = 22,
		lego_23 = 23,
		lego_24 = 24,
		lego_25 = 25,
		lego_26 = 26,
		lego_27 = 27,
		lego_28 = 28,
		lego_29 = 29,
		lego_36 = 36,
		lego_37 = 37,
		lego_38 = 38,
		lego_39 = 39,
		lego_40 = 40,
		lego_41 = 41,
		lego_42 = 42,
		lego_43 = 43,
		lego_44 = 44,
		lego_45 = 45,
		lego_47 = 47,
		lego_48 = 48,
		lego_49 = 49,
		lego_50 = 50,
		lego_100 = 100,
		lego_101 = 101,
		lego_102 = 102,
		lego_103 = 103,
		lego_104 = 104,
		lego_105 = 105,
		lego_106 = 106,
		lego_107 = 107,
		lego_108 = 108,
		lego_110 = 110,
		lego_111 = 111,
		lego_112 = 112,
		lego_113 = 113,
		lego_115 = 115,
		lego_116 = 116,
		lego_118 = 118,
		lego_119 = 119,
		lego_120 = 120,
		lego_121 = 121,
		lego_123 = 123,
		lego_124 = 124,
		lego_125 = 125,
		lego_126 = 126,
		lego_127 = 127,
		lego_128 = 128,
		lego_131 = 131,
		lego_133 = 133,
		lego_134 = 134,
		lego_135 = 135,
		lego_136 = 136,
		lego_137 = 137,
		lego_138 = 138,
		lego_140 = 140,
		lego_141 = 141,
		lego_143 = 143,
		lego_145 = 145,
		lego_146 = 146,
		lego_147 = 147,
		lego_148 = 148,
		lego_149 = 149,
		lego_150 = 150,
		lego_151 = 151,
		lego_153 = 153,
		lego_154 = 154,
		lego_157 = 157,
		lego_158 = 158,
		lego_168 = 168,
		lego_176 = 176,
		lego_178 = 178,
		lego_179 = 179,
		lego_180 = 180,
		lego_190 = 190,
		lego_191 = 191,
		lego_192 = 192,
		lego_193 = 193,
		lego_194 = 194,
		lego_195 = 195,
		lego_196 = 196,
		lego_198 = 198,
		lego_199 = 199,
		lego_200 = 200,
		lego_208 = 208,
		lego_209 = 209,
		lego_210 = 210,
		lego_211 = 211,
		lego_212 = 212,
		lego_213 = 213,
		lego_216 = 216,
		lego_217 = 217,
		lego_218 = 218,
		lego_219 = 219,
		lego_220 = 220,
		lego_221 = 221,
		lego_222 = 222,
		lego_223 = 223,
		lego_224 = 224,
		lego_225 = 225,
		lego_226 = 226,
		lego_232 = 232,
		lego_268 = 268
	};

	BrickColor(int number);
	BrickColor() : number(lego_1) {}
	BrickColor(Number number) : number(number) {}

	static BrickColor closest(G3D::Color4 color);
	static BrickColor closest(G3D::Color3 color);
	static BrickColor closest(G3D::Color4uint8 color);
	static BrickColor closest(G3D::Color3uint8 color);

	static BrickColor parse(const char* name);

	static BrickColor random();

	G3D::Color3 color3() const;

	const std::string& name() const;

	bool operator==(const BrickColor& other) const { return number == other.number; }

	bool operator!=(const BrickColor& other) const { return number != other.number; }

	bool operator<(const BrickColor& other) const { return number < other.number; }

	bool operator>(const BrickColor& other) const { return number > other.number; }

	Number number; 
};
}
namespace RBX {
class Part
{
public:
	enum PartType
	{
		BALL_PART = 0,
		BLOCK_PART = 1,
		CYLINDER_PART = 2,
	};

	
	Part(PartType _type, const G3D::Vector3& _gridSize, G3D::Color4 _color, const G3D::CoordinateFrame& c)
		: type(_type), gridSize(_gridSize), color(_color), surfaceType(NO_SURFACE), coordinateFrame(c)
	{
	}

	
	Part(
		PartType type,
		const G3D::Vector3& gridSize,
		G3D::Color4 color,
		const Vector6<SurfaceType>& surfaceType,
		const G3D::CoordinateFrame& c
	)
		: type(type), gridSize(gridSize), color(color), surfaceType(surfaceType), coordinateFrame(c)
	{
	}

	
	
	
	

	Part() {}

	PartType type;                        
	G3D::Vector3 gridSize;                
	G3D::Color4 color;                    
	Vector6<SurfaceType> surfaceType;     
	G3D::CoordinateFrame coordinateFrame; 
};
}
namespace RBX {
struct CanAggregateChanged
{
	const bool canClump; 

	CanAggregateChanged(bool canClump) : canClump(canClump) {}
};
extern char sPart[];
class PartInstance : public DescribedCreatable<PartInstance, PVInstance, sPart>,
					 public Notifier<PartInstance, CanAggregateChanged>,
					 public IMoving,
					 public IRenderable,
					 public virtual IPrimaryPart,
					 public virtual ICameraSubject,
					 public virtual ISelectable3d
{
public:
	static bool highlightSleepParts;
	static bool highlightAwakeParts;
	static bool showAnchoredParts;
	static bool showPartCoord;
	static bool showUnalignedParts;
	static bool showSpanningTree;

	enum FormFactor
	{
		SYMETRIC = 0,
		BRICK = 1,
		PLATE = 2
	};

	static float plateHeight();
	static float brickHeight();
	static float cameraTransparentDistance();
	static float cameraTranslucentDistance();

private:
	G3D::Vector3 xmlToUiSize(const G3D::Vector3& size) const;
	G3D::Vector3 uiToXmlSize(const G3D::Vector3& uiSize) const;

	Part::PartType partType;                           
	FormFactor formFactor;                             
	BrickColor color;                                  
	float transparency;                                
	float reflectance;                                 
	bool locked;                                       
	Surfaces surfaces;                                 
	float renderImportance;                            
	boost::scoped_ptr<Primitive> primitive;            
	World* myWorld;                                    
	float alphaModifier;                               
	ComputeProp<Part, PartInstance> PersistentPart;    
	ComputeProp<bool, PartInstance> SurfacesNeedAdorn; 

	Part computePersistentPart() const;

	const Part& getPart();
	bool computeSurfacesNeedAdorn() const;
	void safeMove();

public:
	PartInstance();
	virtual ~PartInstance();

	static const Reflection::PropDescriptor<PartInstance, float> prop_RenderImportance;
	static const Reflection::EnumPropDescriptor<PartInstance, Part::PartType> prop_shapeXml;
	static const Reflection::PropDescriptor<PartInstance, float> prop_Transparency;
	static const Reflection::PropDescriptor<PartInstance, float> prop_Reflectance;
	static const Reflection::PropDescriptor<PartInstance, bool> prop_Locked;
	static const Reflection::PropDescriptor<PartInstance, G3D::Color3> prop_Color;
	static const Reflection::PropDescriptor<PartInstance, BrickColor> prop_BrickColor;
	static const Reflection::PropDescriptor<PartInstance, bool> prop_CanCollide;
	static const Reflection::PropDescriptor<PartInstance, bool> prop_Anchored;
	static const Reflection::PropDescriptor<PartInstance, G3D::Vector3> prop_Size;

	const Primitive* getPrimitive() const { return primitive.get(); }
	Primitive* getPrimitive() { return primitive.get(); }

	static bool nonNullInWorkspace(shared_ptr<PartInstance> part);

	
	Part::PartType getPartType() const { return partType; }

	FormFactor getFormFactor() const { return formFactor; }

	float getRenderImportance() const { return renderImportance; }

	float getTransparencyXml() const { return transparency; }

	float getReflectance() const { return reflectance; }

	bool getPartLocked() const { return locked; }

	Surfaces& getSurfaces();
	const Surfaces& getSurfaces() const;

	bool getIsTransparent() const { return 1.0f - (1.0f - transparency) * alphaModifier > 0.1f; }

	const CoordinateFrame& getCoordinateFrame() const;

	float getMass();

	const Vector3& getPartSizeXml() const;
	Vector3 getPartSizeUi() const;

	bool getDragging() const;
	bool getCanCollide() const;
	bool getAnchored() const;

	float getFriction() const;
	float getElasticity() const;

	void setPartTypeXml(Part::PartType _type);
	void setPartTypeUi(Part::PartType _type);
	void setPartSizeXml(const Vector3& rbxSize);
	void setPartSizeUi(const Vector3& uiSize);
	void setRenderImportance(float value);
	void setPartLocked(bool value);
	void setTransparency(float value);
	void setAlphaModifier(float value);
	void setReflectance(float value);
	void setFormFactorXml(FormFactor value);
	void setDragging(bool value);
	void setCanCollide(bool value);
	void setAnchored(bool value);
	
	BrickColor getColor() const { return color; }

	
	G3D::Color3 getColor3() const { return color.color3(); }

	void setColor3(const G3D::Color3& value);

	void setColor(BrickColor value);

	void onSurfaceChanged(NormalId normalId);

	virtual void onCanAggregateChanged(bool canAggregate);
	virtual bool reportTouches() const;

	virtual void onAncestorChanged(const AncestorChanged& event);
	virtual bool askSetParent(const Instance* instance) const;
	virtual void onChildAdded(Instance* child);
	virtual void setName(const std::string& value);

	virtual const CoordinateFrame getLocation() const;

	virtual void onCameraNear(float distance);
	virtual void getCameraIgnorePrimitives(std::vector<const Primitive*>& primitives);

	virtual bool shouldRender3dAdorn() const;
	virtual void render3dAdorn(Adorn* adorn);
	virtual void render3dSelect(Adorn* adorn, SelectState selectState);

	virtual bool isControllable() const;

	virtual PartInstance* getPrimaryPart();
	virtual const PartInstance* getPrimaryPartConst() const;

	virtual void legacyTraverseState(const CoordinateFrame& parentState);
	virtual void onParentControllerChanged();

	static PartInstance* fromPrimitive(Primitive* primitive);
	static const PartInstance* fromPrimitiveConst(const Primitive* primitive);

	virtual const Primitive* getBiggestPrimitive() const;
	virtual bool hitTest(const G3D::Ray& worldRay, G3D::Vector3& worldHitPoint);

	virtual Extents getExtentsWorld() const;
	virtual Extents getExtentsLocal() const;
};
}
namespace RBX {class Kernel;class IStage;
class __declspec(novtable) IPipelined {IStage*currentStage;public:virtual ~IPipelined();virtual void putInKernel(Kernel*);virtual void removeFromKernel();};
namespace Sim {enum EdgeState{UNDEFINED,STEPPING,SLEEPING,TOUCHING,TOUCHING_SLEEPING};}
class __declspec(novtable) Edge : public IPipelined
{
public:
	enum EdgeType
	{
		JOINT = 0,
		CONTACT = 1,
	};

	Edge(Primitive* prim0, Primitive* prim1);

	virtual EdgeType getEdgeType() const = 0;                   
	virtual void setPrimitive(int index, Primitive* primitive); 

	Edge* getNext(const Primitive* primitive) const { return primitive == prim0 ? next0 : next1; }

	void setNext(Primitive* primitive, Edge* edge)
	{
		if (primitive == prim0) {
			next0 = edge;
		}
		else {
			next1 = edge;
		}
	}

	Primitive* getPrimitive(int index) const { return (&prim0)[index]; }

	Primitive* otherPrimitive(const Primitive* primitive) const { return primitive == prim0 ? prim1 : prim0; }

	bool getInEdgeList() const { return inEdgeList; }
	void setInEdgeList(bool value) { inEdgeList = value; }

	Sim::EdgeState getEdgeState() const { return edgeState; }
	void setEdgeState(Sim::EdgeState value) { edgeState = value; }

private:
	Sim::EdgeState edgeState; 
	Primitive* prim0;         
	Primitive* prim1;         
	Edge* next0;              
	Edge* next1;              
	bool inEdgeList;          
};
}
namespace RBX {class TextureProxyBase;
class __declspec(novtable) Adorn
{
public:
	enum XAlign
	{
		XALIGN_RIGHT = 0,
		XALIGN_LEFT = 1,
		XALIGN_CENTER = 2
	};

	enum YAlign
	{
		YALIGN_TOP = 0,
		YALIGN_BASELINE = 1,
		YALIGN_CENTER = 2,
		YALIGN_BOTTOM = 3
	};

	enum Spacing
	{
		PROPORTIONAL_SPACING = 0,
		FIXED_SPACING = 1
	};

	virtual ~Adorn(); 

	virtual G3D::ReferenceCountedPointer<TextureProxyBase> createTextureProxy(
		const std::string& name
	) = 0;                                       
	virtual void prepareRenderPass() = 0;        
	virtual void finishRenderPass() = 0;         
	virtual G3D::Rect2D getViewport() const = 0; 
	virtual int getWidth() const = 0;            
	virtual int getHeight() const = 0;           

	virtual void setTexture(int stage, G3D::ReferenceCountedPointer<TextureProxyBase> texture) = 0; 

	virtual G3D::Rect2D getTextureSize(G3D::ReferenceCountedPointer<TextureProxyBase> texture) const = 0; 

	virtual void line2d(
		const G3D::Vector2& from,
		const G3D::Vector2& to,
		const G3D::Color4& color
	) const = 0; 

	virtual void outlineRect2d(
		const G3D::Rect2D& rect,
		float thickness,
		const G3D::Color4& color
	) const = 0; 

	virtual void rect2d(const G3D::Rect2D& rect, const G3D::Color4& color) const = 0; 

	virtual G3D::Vector2 get2DStringBounds(const std::string& s, double size, Spacing spacing) const = 0; 

	virtual G3D::Vector2 drawFont2D(
		const std::string& s,
		const G3D::Vector2& position,
		double size,
		const G3D::Color4& color,
		const G3D::Color4& outline,
		XAlign xAlign,
		YAlign yAlign,
		Spacing spacing
	) const = 0; 

	virtual void setObjectToWorldMatrix(const G3D::CoordinateFrame& coord) = 0; 
	virtual void setColor(const G3D::Color4& color) = 0;                        

	virtual void box(const G3D::AABox& box, const G3D::Color4& solid, const G3D::Color4& wire) = 0; 
	virtual void sphere(
		const G3D::Sphere& sphere,
		const G3D::Color4& solid,
		const G3D::Color4& wire
	) = 0; 
	virtual void explosion(
		const G3D::Sphere& sphere,
		const G3D::Color4& solid,
		const G3D::Color4& wire
	) = 0; 

	virtual void cylinderAlongX(
		float radius,
		float length,
		const G3D::Color4& solid,
		const G3D::Color4& wire
	) = 0; 

	virtual void ray(const G3D::Ray& ray, const G3D::Color4& color, float scale) = 0;                     
	virtual void lineSegment(const G3D::LineSegment& segment, const G3D::Color4& color, float scale) = 0; 
	virtual void axes(const G3D::Color4& x, const G3D::Color4& y, const G3D::Color4& z, float scale) = 0; 

	virtual void quad(
		const G3D::Vector3& v0,
		const G3D::Vector3& v1,
		const G3D::Vector3& v2,
		const G3D::Vector3& v3,
		const G3D::Color4& color
	) = 0; 
};
}
namespace RBX {
namespace Sim {enum AssemblyState {ANCHORED=0,RECURSIVE_WAKE_PENDING=1,WAKE_PENDING=2,AWAKE=3,SLEEPING_CHECKING=4,SLEEPING_DEEPLY=5};}
template<class T>inline T&partAdornField(void*p,unsigned n){return *reinterpret_cast<T*>(reinterpret_cast<char*>(p)+n);}
class AdornPrimitiveView;
class AdornClumpView {public:Sim::AssemblyState sleepStatus(){return partAdornField<Sim::AssemblyState>(this,0);}AdornPrimitiveView*rootPrimitive(){return partAdornField<AdornPrimitiveView*>(this,0x1c);}};
class AdornAssemblyView {public:
 AdornClumpView*getRootClump(){return partAdornField<AdornClumpView*>(this,0x18);}
 Sim::AssemblyState getSleepStatus(){AdornClumpView*p=partAdornField<AdornClumpView*>(this,0x18);return p?p->sleepStatus():Sim::ANCHORED;}
 AdornPrimitiveView*getMainPrimitive(){return partAdornField<AdornClumpView*>(this,0x24)->rootPrimitive();}
};
class AdornGeoPairView {public:G3D::Vector3 computePosition();}; 
class AdornConnectorView {public:AdornGeoPairView&getGeoPair(){return partAdornField<AdornGeoPairView>(this,8);}};
class AdornContactView:public Edge {
 virtual void deleteAllConnectors()=0;virtual bool stepContact()=0;
 virtual bool computeIsColliding(float)=0;
public:
 virtual int numConnectors()const=0;virtual AdornConnectorView*getConnector(int)const=0;
};
class AdornPrimitiveView {public:
 AdornAssemblyView*getAssembly()const; 
 const G3D::CoordinateFrame&getCoordinateFrame()const; 
 AdornContactView*getContact(int); 
 int getNumContacts(){return partAdornField<int>(this,0x20);}
 bool getAnchored(){return partAdornField<bool>(this,0xa9);}
};
class AdornPartCoreView {public:bool aligned()const;}; 
class AdornDrawView {public:
 static void partAdorn(const Part&,Adorn*,const G3D::Color3&); 
 static void selectionBox(const Part&,Adorn*,const G3D::Color4&); 
 static void partSurface(const Part&,int,Adorn*,const G3D::Color4&); 
};
int adornClosestObjectNormalId(const G3D::Vector3&,const G3D::Matrix3&); 
extern bool nativeShowContactPoints; 
void PartInstance::render3dAdorn(Adorn*adorn){

 if(partType==Part::CYLINDER_PART||partAdornField<ComputeProp<bool,PartInstance> >(this,0x3b0))
  AdornDrawView::partAdorn(getPart(),adorn,Controller::controllerTypeToColor(getTopPVController()->getControllerType()));
 if(highlightSleepParts&&partAdornField<AdornPrimitiveView>(this,0x228).getAssembly()){
  AdornClumpView*rootClump=partAdornField<AdornPrimitiveView>(this,0x228).getAssembly()->getRootClump();
  if(rootClump){Sim::AssemblyState sleepStatus=rootClump->sleepStatus();
  if(sleepStatus!=Sim::ANCHORED&&sleepStatus!=Sim::AWAKE){
   G3D::Color3 sleepColor;
   switch(sleepStatus){case Sim::RECURSIVE_WAKE_PENDING:case Sim::WAKE_PENDING:sleepColor=G3D::Color3::purple();break;case Sim::SLEEPING_CHECKING:sleepColor=G3D::Color3::orange();break;case Sim::SLEEPING_DEEPLY:sleepColor=G3D::Color3::yellow();break;default:sleepColor=sleepColor;break;}
   AdornDrawView::selectionBox(getPart(),adorn,sleepColor);
  }}
 }
 if(highlightAwakeParts&&partAdornField<AdornPrimitiveView>(this,0x228).getAssembly()){
  AdornClumpView*rootClump=partAdornField<AdornPrimitiveView>(this,0x228).getAssembly()->getRootClump();
  if(rootClump){Sim::AssemblyState sleepStatus=rootClump->sleepStatus();
  if(sleepStatus!=Sim::ANCHORED&&sleepStatus!=Sim::SLEEPING_DEEPLY){
   G3D::Color3 wakeColor;
   switch(sleepStatus){case Sim::AWAKE:wakeColor=G3D::Color3::red();break;case Sim::SLEEPING_CHECKING:wakeColor=G3D::Color3::orange();break;case Sim::RECURSIVE_WAKE_PENDING:case Sim::WAKE_PENDING:wakeColor=G3D::Color3::purple();break;default:wakeColor=wakeColor;break;}
   AdornDrawView::selectionBox(getPart(),adorn,wakeColor);
  }}
 }
 if(showPartCoord)renderCoordinateFrame(adorn);
 if(showAnchoredParts&&partAdornField<AdornPrimitiveView>(this,0x228).getAnchored()){
  float nativeAlpha=1.0f-(1.0f-transparency)*partAdornField<float>(this,0x328);
  float surfaceTransparency=1.0f-nativeAlpha;
  G3D::Color4 color(G3D::Color3::gray(),surfaceTransparency);
  const G3D::CoordinateFrame&cframe=partAdornField<AdornPrimitiveView>(this,0x228).getCoordinateFrame();
  AdornDrawView::partSurface(getPart(),adornClosestObjectNormalId(G3D::Vector3(0.0f,-1.0f,0.0f),cframe.rotation),adorn,color);
 }
 if(showUnalignedParts&&!reinterpret_cast<AdornPartCoreView*>(this)->aligned())AdornDrawView::selectionBox(getPart(),adorn,G3D::Color3::yellow());
 if(showSpanningTree){
  float&nativeAlpha=partAdornField<float>(this,0x328);
  if(0.3f!=nativeAlpha){nativeAlpha=0.3f;raisePropertyChanged(reinterpret_cast<const Reflection::PropertyDescriptor&>(prop_Transparency));}
  AdornAssemblyView*assembly=partAdornField<AdornPrimitiveView>(this,0x228).getAssembly();
  if(assembly&&&partAdornField<AdornPrimitiveView>(this,0x228)==assembly->getMainPrimitive()){
   adorn->setObjectToWorldMatrix(G3D::CoordinateFrame(partAdornField<AdornPrimitiveView>(this,0x228).getCoordinateFrame().translation));
   if(partAdornField<AdornPrimitiveView>(this,0x228).getAnchored())adorn->sphere(G3D::Sphere(G3D::Vector3::zero(),0.5f),G3D::Color3::green(),G3D::Color4::clear());
   else {G3D::Vector3 boxSize=G3D::Vector3::one()*0.25f;adorn->box(G3D::AABox(-boxSize,boxSize),G3D::Color3::green(),G3D::Color4::clear());}
  }
 }
 if(nativeShowContactPoints){
  for(int i=0;i<partAdornField<AdornPrimitiveView>(this,0x228).getNumContacts();++i){
   AdornContactView*contact=partAdornField<AdornPrimitiveView>(this,0x228).getContact(i);
   for(int j=0;j<contact->numConnectors();++j){
    G3D::Vector3 position=contact->getConnector(j)->getGeoPair().computePosition();
    adorn->setObjectToWorldMatrix(G3D::CoordinateFrame(position));
    adorn->sphere(G3D::Sphere(G3D::Vector3::zero(),0.5f),G3D::Color3::red(),G3D::Color4::clear());
   }
  }
 }
}
}
// Native used value layouts. SDK owner declarations support only verified
// pointer/callback conversions here; no complete native PartInstance size claim.
typedef char part_adorn_vector_size[sizeof(G3D::Vector3)==12?1:-1];
typedef char part_adorn_matrix_size[sizeof(G3D::Matrix3)==36?1:-1];
typedef char part_adorn_frame_size[sizeof(G3D::CoordinateFrame)==48?1:-1];
typedef char part_adorn_color_size[sizeof(G3D::Color3)==12?1:-1];
typedef char part_adorn_color4_size[sizeof(G3D::Color4)==16?1:-1];
typedef char part_adorn_sphere_size[sizeof(G3D::Sphere)==20?1:-1];
typedef char part_adorn_sphere_center[offsetof(G3D::Sphere,center)==4?1:-1];
typedef char part_adorn_sphere_radius[offsetof(G3D::Sphere,radius)==16?1:-1];
typedef char part_adorn_box_size[sizeof(G3D::AABox)==24?1:-1];
typedef char part_adorn_part_value_size[sizeof(RBX::Part)==104?1:-1];
typedef char part_adorn_surface_size[sizeof(RBX::Surface)==8?1:-1];
typedef char part_adorn_surfaces_size[sizeof(RBX::Surfaces)==48?1:-1];
typedef char part_adorn_brick_size[sizeof(RBX::BrickColor)==4?1:-1];
typedef char part_adorn_cache_size[sizeof(RBX::ComputeProp<bool,RBX::PartInstance>)==24?1:-1];
typedef char part_adorn_member_pointer_size[sizeof(bool(RBX::PartInstance::*)()const)==12?1:-1];
typedef char part_adorn_renderable_size[sizeof(RBX::IRenderable)==16?1:-1];
typedef char part_adorn_moving_size[sizeof(RBX::IMoving)==12?1:-1];
typedef char part_adorn_guid_size[sizeof(RBX::GuidItem<RBX::Instance>)==16?1:-1];
typedef char part_adorn_notifier_size[sizeof(RBX::Notifier<RBX::Instance,RBX::ChildAdded>)==32?1:-1];
typedef char part_adorn_instance_size[sizeof(RBX::Instance)==0x130?1:-1];
