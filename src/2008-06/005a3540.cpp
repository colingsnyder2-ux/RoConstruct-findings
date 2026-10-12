// from server: 92% by king_originala
namespace std {
template<class T> struct char_traits {};
template<class T> struct allocator {};

template<class T, class Traits, class Alloc>
class basic_string {
    char storage[28];
public:
    basic_string(const basic_string&);
    ~basic_string();
};
}

typedef std::basic_string<char, std::char_traits<char>, std::allocator<char> > String;

struct Request {
    String name;
    int mode;
};

struct Object {
    ~Object();
};

struct StreamBase {
    virtual ~StreamBase();
    char padding[36];
    void* buffer;
};

struct Stream : virtual StreamBase {};

template<class T>
struct OwnerRef {
    T* p;
};

template<class T>
struct Owner {
    T* p;
    Owner(Owner& other);
    Owner(OwnerRef<T> other);
    operator OwnerRef<T>();
    ~Owner();
    T* release();
};

template<class T>
Owner<T>::Owner(Owner& other) : p(other.release()) {}

template<class T>
Owner<T>::Owner(OwnerRef<T> other) : p(other.p) {}

template<class T>
Owner<T>::operator OwnerRef<T>() {
    OwnerRef<T> result;
    result.p = release();
    return result;
}

template<class T>
Owner<T>::~Owner() {
    if (p)
        delete p;
}

template<class T>
T* Owner<T>::release() {
    T* result = p;
    p = 0;
    return result;
}

namespace RBX {
class Instance {
public:
    virtual ~Instance();
    char pad[0x100];
    Instance* next;
};

class ServiceProvider : public Instance {
public:
    ServiceProvider* finish();
    Owner<Stream> open(Request);
};
}

RBX::ServiceProvider* func_00465210(RBX::Instance*);

struct Reader {
    char storage[72];
    Reader(void*);
    ~Reader();
    Owner<Object> read();
};

struct Element {
    int data[2];
};

struct Container {
    char padding[12];
    Element* first;
    Element* last;
};

struct Reference {
    Container* p;
    void assign(Object*, Container*);
};

struct Workspace : RBX::Instance {
    void load(Request, Reference, int, int);
    void finishLoad(Container*, Workspace*, int, int);
};

void Workspace::load(Request request, Reference destination,
                     int option1, int option2) {
    Owner<Stream> stream(func_00465210(this)->open(request));
    Reader reader(stream.p->buffer);
    Owner<Object> object(reader.read());

    Container* container = destination.p;
    destination.assign(object.p, container);

    if (static_cast<unsigned>(container->last - container->first) > 0)
        finishLoad(container, this, option1, option2);
}
