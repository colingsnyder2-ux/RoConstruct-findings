// from server: 59% by king_originala
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_unit_5f52f2dcf30ae840.cpp

// Candidate translation unit (score above; library headers required).
// Native004eb190, complete2849B owner. Names are codegen analogues.
// Opaque receivers have no allocation/sizeof claims; views use native accesses.
/**
  @file ReferenceCount.h

  Reference Counting Garbage Collector for C++

  @maintainer Morgan McGuire, matrix@graphics3d.com
  @cite Adapted and extended from Justin Miller's "RGC" class that appeared in BYTE magazine.
  @cite See also http://www.jelovic.com/articles/cpp_without_memory_errors_slides.htm

  @created 2001-10-23
  @edited  2006-02-24

*/

#ifndef G3D_RGC_H
#define G3D_RGC_H

#include "G3D/platform.h"
#include "G3D/debug.h"
#include "G3D/AtomicInt32.h"

namespace G3D {

/** Base class for WeakReferenceCountedPointer */
class _WeakPtr {
public:
    inline virtual ~_WeakPtr() {}

protected:
    friend class ReferenceCountedObject;

    /** Called by ReferenceCountedObject to tell a weak pointer that its underlying object was collected. */
    virtual void objectCollected() = 0;
};

/** Used internally by ReferenceCountedObject */
class _WeakPtrLinkedList {
public:
    _WeakPtr*                   weakPtr;
    _WeakPtrLinkedList*         next;

    inline _WeakPtrLinkedList() : weakPtr(NULL), next(NULL) {}

    /** Inserts this node into the head of the list that previously had n as its head. */
    inline _WeakPtrLinkedList(_WeakPtr* p, _WeakPtrLinkedList* n) : weakPtr(p), next(n) {}
};

/**
 Objects that are reference counted inherit from this.  Subclasses 
 <B>must</B> have a public destructor (the default destructor is fine)
 and <B>publicly</B> inherit ReferenceCountedObject.

 Multiple inheritance from a reference counted object is dangerous-- use 
 at your own risk.

 ReferenceCountedPointer and ReferenceCountedObject are threadsafe.
 You can create and drop references on multiple threads without
 violating integrity.  WeakReferenceCountedPointer is <i>not</i>
 threadsafe.  Introducing a weak pointer destroys all thread safety,
 even for strong pointers to the same object (this is inherent in the
 design of the class; we cannot fix it without slowing down the
 performance of reference counted objects.)

 <B>Usage Example</B>

  <PRE>

class Foo : public G3D::ReferenceCountedObject {
public:
    int x;
};

class Bar : public Foo {};

typedef G3D::ReferenceCountedPointer<Foo> FooRef;
typedef G3D::WeakReferenceCountedPointer<Foo> WeakFooRef;
typedef G3D::ReferenceCountedPointer<Bar> BarRef;


int main(int argc, char *argv[]) {

    WeakFooRef x;

    {
        FooRef a = new Foo();

        // Reference count == 1

        x = a;
        // Weak references do not increase count

        {
            FooRef b = a;
            // Reference count == 2
        }

        // Reference count == 1
    }
    // No more strong references; object automatically deleted.
    // x is set to NULL automatically.

    // Example of using dynamic cast on reference counted objects
    BarRef b = new Bar();

    // No cast needed to go down the heirarchy.
    FooRef f = b;

    // We can't cast the reference object because it is a class.
    // Instead we must extract the pointer and cast that:
    b = dynamic_cast<Bar*>(&*f);

    return 0;
}
</PRE>

@deprecated To be replaced by boost::shared_ptr in 7.0
 */
class ReferenceCountedObject {
public:

    /**
     The long name is to keep this from accidentally conflicting with
     a subclass's variable name.  Do not use or explicitly manipulate
     this value--its type may change in the future and is not part
     of the supported API.
     */
    AtomicInt32                 ReferenceCountedObject_refCount;
 
    /**
     Linked list of all weak pointers that reference this (some may be
     on the stack!).  Do not use or explicitly manipulate this value.
     */
    _WeakPtrLinkedList*         ReferenceCountedObject_weakPointer;

protected:

    ReferenceCountedObject() : 
        ReferenceCountedObject_refCount(0), 
        ReferenceCountedObject_weakPointer(0) {

        debugAssertM(isValidHeapPointer(this), 
            "Reference counted objects must be allocated on the heap.");
    }

public:

    /** Automatically called immediately before the object is deleted. 
        This is not called from the destructor because it needs to be invoked
        before the subclass destructor.
      */
    void ReferenceCountedObject_zeroWeakPointers() {
        // Tell all of my weak pointers that I'm gone.
        
        _WeakPtrLinkedList* node = ReferenceCountedObject_weakPointer;

        while (node != 0) {

            // Notify the weak pointer that it is going away
            node->weakPtr->objectCollected();

            // Free the node and advance
            _WeakPtrLinkedList* tmp = node;
            node = node->next;
            delete tmp;
        }
    }

    virtual ~ReferenceCountedObject() {}


    /**
      Note: copies will initially start out with 0 
      references and 0 weak references like any other object.
     */
    ReferenceCountedObject(const ReferenceCountedObject& notUsed) : 
        ReferenceCountedObject_refCount(0),
        ReferenceCountedObject_weakPointer(0) {
        (void)notUsed;
        debugAssertM(G3D::isValidHeapPointer(this), 
            "Reference counted objects must be allocated on the heap.");
    }

    ReferenceCountedObject& operator=(const ReferenceCountedObject& other) {
        (void)other;
        // Nothing changes when I am assigned; the reference count on
        // both objects is the same (although my super-class probably
        // changes).
        return *this;
    }
};



/**
 Use ReferenceCountedPointer<T> in place of T* in your program.
 T must subclass ReferenceCountedObject.
@deprecated To be replaced by boost::shared_ptr in 7.0
 */
template <class T>
class ReferenceCountedPointer {
private:

    T*           m_pointer;

public:
	typedef T element_type;

    inline T* pointer() const {
        return m_pointer;
    }

    /** @deprecated use pointer() */
    inline T* getPointer() const {
        return m_pointer;
    }

private:

    /** Nulls out the pointer and drops a reference. If the reference
        count hits zero. */
    void zeroPointer() {
        if (m_pointer != NULL) {

            debugAssert(G3D::isValidHeapPointer(m_pointer));
            debugAssertM(m_pointer->ReferenceCountedObject_refCount.value() > 0,
                        "Dangling reference detected.");

            // Only delete if this instance caused the count to hit
            // exactly zero.  If there is a race condition, the value
            // may be zero after decrement returns, but only one of
            // the instances will get a zero return value.
            if (m_pointer->ReferenceCountedObject_refCount.decrement() == 0) {
                // We held the last reference, so delete the object.
                // This test is threadsafe because there is no way for
                // the reference count to increase after the last
                // reference was dropped (assuming the application does
                // not voilate the class abstraction).
                //debugPrintf("  delete 0x%x\n", m_pointer);

                // We must zero the weak pointers *before* deletion in case there
                // are cycles of weak references.
                // Note that since there are no strong references at this point,
                // it is perfectly fair to zero the weak pointers anyway.
                m_pointer->ReferenceCountedObject_zeroWeakPointers();
                delete m_pointer;
            }

            m_pointer = NULL;
        }
    }

    /** Non-atomic (except for the referencec increment).  Can only be
        called in contexts like the copy constructor or initial
        constructor where it is known that the reference count will
        not hit zero on some other thread. */
    void setPointer(T* x) {
        if (x != m_pointer) {
            zeroPointer();

            if (x != NULL) {
                debugAssert(G3D::isValidHeapPointer(x));

		        m_pointer = x;

                // Note that the ref count can be zero if this is the
                // first pointer to it
                debugAssertM(m_pointer->ReferenceCountedObject_refCount.value() >= 0, 
                             "Negative reference count detected.");
                m_pointer->ReferenceCountedObject_refCount.increment();
            }
        }
    }

public:      

    inline ReferenceCountedPointer() : m_pointer(NULL) {}

    /**
      Allow silent cast <i>to</i> the base class.
    
      <pre>
        SubRef  s = new Sub();
        BaseRef b = s;
      </pre>

      i.e., compile-time subtyping rule 
      RCP&lt;<I>T</I>&gt; &lt;: RCP&lt;<I>S</I>&gt; if <I>T</I> &lt;: <I>S</I>
     */
    template <class S>
    inline ReferenceCountedPointer(const ReferenceCountedPointer<S>& p) : 
        m_pointer(NULL) {
        setPointer(p.getPointer());
    }

#   if (! defined(MSC_VER) || (MSC_VER >= 1300))
    /**
      Explicit cast to a subclass.  Acts like dynamic cast; the result will be NULL if
      the cast cannot succeed.  Not supported on VC6.
      <pre>
        SubRef  s = new Sub();
        BaseRef b = s;
        s = b.downcast<Sub>();   // Note that the template argument is the object type, not the pointer type.
      </pre>
      */
    template <class S>
    ReferenceCountedPointer<S> downcast() {
        return ReferenceCountedPointer<S>(dynamic_cast<S*>(m_pointer));
    }
#   endif

    // We need an explicit version of the copy constructor as well or 
    // the default copy constructor will be used.
    __forceinline ReferenceCountedPointer(const ReferenceCountedPointer<T>& p) : m_pointer(NULL) {
        setPointer(p.m_pointer);
    }

    /** Allows construction from a raw pointer.  That object will thereafter be
        reference counted -- do not call delete on it. */
    inline ReferenceCountedPointer(T* p) : m_pointer(NULL) { 
        setPointer(p); 
    }
    
    inline ~ReferenceCountedPointer() {
        zeroPointer();
    }
  

    inline const ReferenceCountedPointer<T>& operator=(const ReferenceCountedPointer<T>& p) {
        setPointer(p.m_pointer);
        return *this;
    }   


    inline ReferenceCountedPointer<T>& operator=(T* p) {
        setPointer(p);
        return *this;
    }


    inline bool operator==(const ReferenceCountedPointer<T>& y) const { 
        return (m_pointer == y.m_pointer); 
    }


    inline bool operator!=(const ReferenceCountedPointer<T>& y) const { 
        return (m_pointer != y.m_pointer); 
    }


	bool operator < (const ReferenceCountedPointer<T>& y) const {
        return (m_pointer < y.m_pointer); 
	}

	bool operator > (const ReferenceCountedPointer<T>& y) const {
        return (m_pointer > y.m_pointer); 
	}

	bool operator <= (const ReferenceCountedPointer<T>& y) const {
        return (m_pointer <= y.m_pointer); 
	}

	bool operator >= (const ReferenceCountedPointer<T>& y) const {
        return (m_pointer >= y.m_pointer); 
	}

    inline T& operator*() const {
        debugAssert(m_pointer != NULL);
        return (*m_pointer);
    }


    inline T* operator->() const {
        return m_pointer;
    }


    inline bool isNull() const {
        return (m_pointer == NULL);
    }

    inline bool notNull() const {
        return (m_pointer != NULL);
    }

    // TODO: distinguish between last strong and last any pointer
    /**
     Returns true if this is the last reference to an object.
     Useful for flushing memoization caches-- a cache that holds the last
     reference is unnecessarily keeping an object alive.

     <b>Not threadsafe.</b>

     @deprecated Use WeakReferenceCountedPointer for caches
     */
    inline int isLastReference() const {
        return (m_pointer->ReferenceCountedObject_refCount.value() == 1);
    }
};


/**
 A weak pointer allows the object it references to be garbage collected.
 Weak pointers are commonly used in caches, where it is important to hold
 a pointer to an object without keeping that object alive solely for the
 cache's benefit (i.e., the object can be collected as soon as all
 pointers to it <B>outside</B> the cache are gone).  They are also convenient
 for adding back-pointers in tree and list structures.

 Weak pointers may become NULL at any point (when their target is collected).
 Therefore the only way to reference the target is to convert to a strong
 pointer and then check that it is not NULL.

@deprecated To be replaced by boost::weak_ptr in 7.0
 */
template <class T>
class WeakReferenceCountedPointer : public _WeakPtr {
private:

    /** NULL if the object has been collected. */
    T*          pointer;

public:
    /**
      Creates a strong pointer, which prevents the object from being
      garbage collected.  The strong pointer may be NULL, which means
      that the underlying.
      */
    //  There is intentionally no way to check if the
    //  WeakReferenceCountedPointer has a null reference without
    //  creating a strong pointer since there is no safe way to use
    //  that information-- the pointer could be collected by a
    //  subsequent statement.
    ReferenceCountedPointer<T> createStrongPtr() const {
        // TODO: What if the object's destructor is called while we
        // are in this method?
        return ReferenceCountedPointer<T>(pointer);
    }


private:

    /** 
        Thread issues: safe because this is only called when another
        object is guaranteed to keep p alive for the duration of this
        call.
     */
    void setPointer(T* p) {
        // TODO: must prevent the object from being collected while in
        // this method

        zeroPointer();
        pointer = p;

        if (pointer != 0) {
            // TODO: threadsafe: must update the list atomically

            // Add myself to the head of my target's list of weak pointers
            _WeakPtrLinkedList* head = 
                new _WeakPtrLinkedList
                (this, 
                 pointer->ReferenceCountedObject_weakPointer);

            pointer->ReferenceCountedObject_weakPointer = head;
        } else {

        }
    }


    /** 
        Removes this from its target's list of weak pointers.  Called
        when the weak pointer goes out of scope.

        Thread issues: depends on the thread safety of createStrongPtr.
     */
    void zeroPointer() {
        // Grab a strong reference to prevent the object from being collected while we
        // are traversing its list.
        ReferenceCountedPointer<T> strong = createStrongPtr();

        // If the following test fails then the object was collected before we
        // reached it.
        if (strong.notNull()) {
            debugAssertM(pointer->ReferenceCountedObject_weakPointer != NULL,
                "Weak pointer exists without a backpointer from the object.");
            
            // Remove myself from my target's list of weak pointers
            _WeakPtrLinkedList** node = &pointer->ReferenceCountedObject_weakPointer;
            while ((*node)->weakPtr != this) {
                node = &((*node)->next);
                debugAssertM(*node != NULL, 
                    "Weak pointer exists without a backpointer from the object (2).");
            }

            // Node must now point at the node for me.  Remove node and
            // close the linked list behind it.
            _WeakPtrLinkedList* temp = *node;
            *node = temp->next;
            
            // Now delete the node corresponding to me
            delete temp;
        }

        pointer = NULL;
    }

public:

    WeakReferenceCountedPointer() : pointer(0) {}

    /**
      Allow compile time subtyping rule 
      RCP&lt;<I>T</I>&gt; &lt;: RCP&lt;<I>S</I>&gt; if <I>T</I> &lt;: <I>S</I>
     */
    template <class S>
    inline WeakReferenceCountedPointer(const WeakReferenceCountedPointer<S>& p) : pointer(0) {
        // Threadsafe: the object cannot be collected while the other pointer exists.
        setPointer(p.pointer);
    }

    template <class S>
    inline WeakReferenceCountedPointer(const ReferenceCountedPointer<S>& p) : pointer(0) {
        // Threadsafe: the object cannot be collected while the other pointer exists.
        setPointer(p.getPointer());
    }

    // Gets called a *lot* when weak pointers are on the stack
    WeakReferenceCountedPointer(
        const WeakReferenceCountedPointer<T>& weakPtr) : pointer(0) {
        setPointer(weakPtr.pointer);
    }

    WeakReferenceCountedPointer(
        const ReferenceCountedPointer<T>& strongPtr) : pointer(0) {
        setPointer(strongPtr.getPointer());
    }

    ~WeakReferenceCountedPointer() {
        zeroPointer();
    }

    WeakReferenceCountedPointer<T>& operator=(const WeakReferenceCountedPointer<T>& other) {
        // Threadsafe: the object cannot be collected while the other pointer exists.

        // I now point at other's target
        setPointer(other.pointer);

        return *this;
    }

    WeakReferenceCountedPointer<T>& operator=(const ReferenceCountedPointer<T>& other) {

        // Threadsafe: the object cannot be collected while the other pointer exists.

        // I now point at other's target
        setPointer(other.getPointer());

        return *this;
    }

    bool operator==(const WeakReferenceCountedPointer<T>& other) const {
        return pointer == other.pointer;
    }

    bool operator!=(const WeakReferenceCountedPointer<T>& other) const {
        return pointer != other.pointer;
    }

	bool operator < (const WeakReferenceCountedPointer<T>& y) const {
        return (pointer < y.pointer); 
	}

	bool operator > (const WeakReferenceCountedPointer<T>& y) const {
        return (pointer > y.pointer); 
	}

	bool operator <= (const WeakReferenceCountedPointer<T>& y) const {
        return (pointer <= y.pointer); 
	}

	bool operator >= (const ReferenceCountedPointer<T>& y) const {
        return (pointer >= y.pointer); 
	}

protected:

    /** Invoked by the destructor on ReferenceCountedPointer. */
    virtual void objectCollected() {
        debugAssertM(pointer != NULL,
                     "Removed a weak pointer twice.");
        pointer = NULL;
    }

};

} // namespace

#endif


#include <G3D/Color3.h>
#include <G3D/Vector3.h>
#include <v8datamodel/BrickColor.h>
#include <util/Name.h>
#include <util/StandardOut.h>
#include <boost/shared_ptr.hpp>
#include <vector>
#include <string>
#include <exception>

template<class T> static inline T& partField(void* p,unsigned offset) {
    return *reinterpret_cast<T*>(static_cast<char*>(p)+offset);
}
namespace RBX {
// ContentId's genuine historical32B declaration: checked string28 + Name*4.
class ContentId {
    std::string id;
    const Name* mimeTypePtr;
public:
    ContentId(); // Native0043d050, observed noninline boundary.
    ContentId& operator=(const ContentId&); // Native0043d0a0.
    bool isNull() const {return id.empty();}
    const Name& mimeType() const {return *mimeTypePtr;}
};
typedef char NativeContentIdSize[sizeof(ContentId)==32?1:-1];
// RTTI selectors only; no invented base offsets or complete object storage.
class Instance {public:virtual ~Instance();};
class ModelInstance {public:virtual ~ModelInstance();};
class Clothing {public:virtual ~Clothing();};
class PartInstance;
class ModelModifierQuery {public:void* findModelModifier();}; //004e7ff0, thiscall
class Humanoid {
public:
    static Humanoid* fromInstance(Instance*);
    PartInstance* getLeftArm() const;
    PartInstance* getRightArm() const;
    PartInstance* getTorso() const;
    PartInstance* getLeftLeg() const;
    PartInstance* getRightLeg() const;
};
class ContentProviderView {
public:
    static ContentProviderView* find(Instance*); //00465210, cdecl
    void requestFile(const ContentId&,int*,std::string&); //00562670, ret0xc
};
class SpecialShapeView {
public:
    ContentId getTextureId() const; //004e5f50, hidden result
    float getAlpha() const; //0059eca0
};
class TextureProxyBase : public G3D::ReferenceCountedObject {
public:
    virtual ~TextureProxyBase();
    // Native551c70/90 and551cb0/d0 establish these four accessors.
    virtual void setValue28(unsigned);
    virtual unsigned getValue28() const;
    virtual void setFloat2c(float);
    virtual float getFloat2c() const;
};
typedef G3D::ReferenceCountedPointer<TextureProxyBase> TextureProxyBaseRef;
namespace RenderBase {
class MaterialBase : public G3D::ReferenceCountedObject {
public:
    class Level {
    public:
        virtual bool isEmptyLevel() const;
        virtual ~Level();
    }; // Proven native virtual prefix; returned references only.
    virtual ~MaterialBase();
    virtual const Level& appendEmptyLevel();
    virtual const Level& appendLevel(TextureProxyBaseRef,G3D::Color3,float,float,float,float);
    virtual const Level& appendLevel(G3D::Color3,float,float,float,float);
};
}
typedef G3D::ReferenceCountedPointer<RenderBase::MaterialBase> PartMaterialRef;
class PartMaterialFactoryView {
public:
    struct Attributes {
        const BrickColor color;
        const float transparency;
        const float reflectance;
    };
    PartMaterialRef getMegaMaterial(Attributes);
    PartMaterialRef getMaterial(Attributes);
};
namespace ViewNew {
class Part {
public:
    PartMaterialRef getMaterial();
    bool usesMegaTexture() const; //004e5f80
};
}
}
extern RBX::PartMaterialRef nativeEmptyPartMaterial;
extern RBX::RenderBase::MaterialBase* createPartMaterial(); //00551730
extern RBX::TextureProxyBase* createPartTexture(void*,const std::string&,bool); //00551920
extern std::string migrateAtlas(std::string,const RBX::Name&,bool,float); //005ef840

RBX::PartMaterialRef RBX::ViewNew::Part::getMaterial() {
#define part partField<PartInstance*>(this,0xbc)
#define material partField<PartMaterialRef>(this,0xc4)
#define invalid partField<bool>(this,0xc8)
#define view partField<void*>(this,0xd0)
#define special partField<SpecialShapeView*>(this,0xd4)
#define factory partField<PartMaterialFactoryView*>(view,0x10)
#define engine partField<void*>(view,0xc)
#define alpha (1.0f-(1.0f-partField<float>(part,0x1e8))*partField<float>(part,0x328))
#define reflectance partField<float>(part,0x1ec)
    if(nativeEmptyPartMaterial.isNull()) {
        nativeEmptyPartMaterial=createPartMaterial();
        nativeEmptyPartMaterial->appendLevel(TextureProxyBaseRef(),G3D::Color3::WHITE,0,0,0,0);
    }
    try {
        if(invalid) {
            PartMaterialFactoryView::Attributes attributes={partField<BrickColor>(part,0x1e4),alpha,reflectance};
            G3D::Color3 color=attributes.color.color3();
            std::string filename;
            Instance* parent=partField<Instance*>(part,0x104);
            if(parent) {
                ModelInstance* model=dynamic_cast<ModelInstance*>(parent);
                if(model && reinterpret_cast<ModelModifierQuery*>(model)->findModelModifier()) {
                    ContentId shirt,pants;
                    typedef std::vector<boost::shared_ptr<Instance> > Children;
                    const Children* children=partField<const Children*>(parent,0x108);
                    if(children) {
                        Children::const_iterator end=children->end();
                        for(Children::const_iterator it=children->begin();it!=end;++it) {
                            Clothing* clothing=dynamic_cast<Clothing*>(it->get());
                            if(clothing) {
                                if(shirt.isNull() && !partField<ContentId>(clothing,0x134).isNull())
                                    shirt=partField<ContentId>(clothing,0x134);
                                if(pants.isNull() && !partField<ContentId>(clothing,0x154).isNull())
                                    pants=partField<ContentId>(clothing,0x154);
                            }
                        }
                    }
                    if(!shirt.isNull() || !pants.isNull()) {
                        Humanoid* humanoid=Humanoid::fromInstance(parent);
                        if(humanoid) {
                            bool shirtPart=!shirt.isNull() && (part==humanoid->getLeftArm() || part==humanoid->getRightArm() || part==humanoid->getTorso());
                            bool pantsPart=!pants.isNull() && (part==humanoid->getLeftLeg() || part==humanoid->getRightLeg() || part==humanoid->getTorso());
                            int shirtStatus=1,pantsStatus=1;
                            if(shirtPart || pantsPart) {
                                material=0;
                                if(shirtPart) {
                                    ContentProviderView::find(reinterpret_cast<Instance*>(part))->requestFile(shirt,&shirtStatus,filename);
                                    if(shirtStatus==1) {
                                        std::string migrated=migrateAtlas(filename,shirt.mimeType(),false,1.0f);
                                        material=createPartMaterial();
                                        material->appendLevel(TextureProxyBaseRef(),color,0.9f,50.0f,reflectance,alpha);
                                        TextureProxyBase* texture=createPartTexture(engine,migrated,false);
                                        material->appendLevel(TextureProxyBaseRef(texture),G3D::Color3::WHITE,0.9f,50.0f,reflectance,alpha+0.001f);
                                        texture->setFloat2c(1.0f);
                                        if(pants.isNull() || part!=humanoid->getTorso()) invalid=false;
                                    }
                                }
                                if(pantsPart) {
                                    ContentProviderView::find(reinterpret_cast<Instance*>(part))->requestFile(pants,&pantsStatus,filename);
                                    if(pantsStatus==1) {
                                        std::string migrated=migrateAtlas(filename,pants.mimeType(),false,1.0f);
                                        if(part==humanoid->getTorso() && material.notNull()) {
                                            TextureProxyBase* texture=createPartTexture(engine,migrated,false);
                                            material->appendLevel(TextureProxyBaseRef(texture),G3D::Color3::WHITE,0.9f,50.0f,reflectance,alpha);
                                            texture->setFloat2c(1.0f);
                                        } else {
                                            material=createPartMaterial();
                                            material->appendLevel(TextureProxyBaseRef(),color,0.9f,50.0f,reflectance,alpha);
                                            TextureProxyBase* texture=createPartTexture(engine,migrated,false);
                                            material->appendLevel(TextureProxyBaseRef(texture),G3D::Color3::WHITE,0.9f,50.0f,reflectance,alpha+0.001f);
                                            texture->setFloat2c(1.0f);
                                        }
                                        invalid=false;
                                    }
                                }
                            }
                            if(!invalid) return material;
                            if((shirtPart && shirtStatus==0) || (pantsPart && pantsStatus==0)) {
                                if(material!=nativeEmptyPartMaterial) material=nativeEmptyPartMaterial;
                                return material;
                            }
                        }
                    }
                }
            }
            if(usesMegaTexture()) material=factory->getMegaMaterial(attributes);
            else if(special && partField<int>(special,0x130)==5) {
                std::string textureFile;
                int status;
                ContentProviderView::find(reinterpret_cast<Instance*>(part))->requestFile(special->getTextureId(),&status,textureFile);
                if(status!=1) {
                    material=factory->getMaterial(attributes);
                    return material;
                }
                G3D::Vector3 vertexColor=partField<G3D::Vector3>(special,0x180);
                float transparency=special->getAlpha();
                material=createPartMaterial();
                material->appendLevel(TextureProxyBaseRef(createPartTexture(engine,textureFile,false)),G3D::Color3(vertexColor),0,0.1f,0,transparency);
            } else material=factory->getMaterial(attributes);
            invalid=false;
        }
    } catch(const std::exception& error) {
        StandardOut::singleton()->print(MESSAGE_WARNING,error);
    }
    return material;
#undef part
#undef material
#undef invalid
#undef view
#undef special
#undef factory
#undef engine
#undef alpha
#undef reflectance
}
