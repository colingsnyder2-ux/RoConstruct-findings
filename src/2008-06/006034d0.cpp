// from server: 76% by EspClaude
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#include <intrin.h>
#include <vector>

template <class T> class bstr {
public:
    __declspec(noinline) bstr() { _Mysize = 0; }
    __declspec(noinline) bstr(const bstr& r) { _Mysize = r._Mysize; }
    __declspec(noinline) ~bstr() { _Mysize = 0; }
    __declspec(noinline) bstr& operator=(const bstr& r) { _Mysize = r._Mysize; return *this; }
    __declspec(noinline) bstr& operator=(const T* r) { _Mysize = 0; return *this; }
    __declspec(noinline) const T* c_str() const { return _Buf; }
    __declspec(noinline) unsigned int size() const { return _Mysize; }
    void* _Myaux;
    T _Buf[16];
    unsigned int _Mysize;
    unsigned int _Myres;
};
extern template class __declspec(dllimport) bstr<char>;
typedef bstr<char> string_;
__declspec(dllimport) string_ operator+(const string_&, const char*);
__declspec(dllimport) string_ operator+(const string_&, const string_&);

namespace boost {
struct lock_error { lock_error(); };
namespace detail {
struct sp_counted_base {
    virtual ~sp_counted_base() {}
    virtual void dispose() = 0;
    virtual void destroy() { delete this; }
    long use_count_;
    long weak_count_;
    void release() {
        if (_InterlockedDecrement(&use_count_) == 0) {
            dispose();
            weak_release();
        }
    }
    void weak_release() {
        if (_InterlockedDecrement(&weak_count_) == 0)
            destroy();
    }
};
struct shared_count {
    sp_counted_base* pi_;
    shared_count() : pi_(0) {}
    shared_count(const shared_count& r) : pi_(r.pi_) { if (pi_ != 0) _InterlockedIncrement(&pi_->use_count_); }
    ~shared_count() { if (pi_ != 0) pi_->release(); }
    shared_count& operator=(const shared_count& r);
};
}
template<class T> class shared_ptr {
public:
    T* px;
    detail::shared_count pn;
    shared_ptr() : px(0), pn() {}
    template<class Y> shared_ptr(const shared_ptr<Y>& r) : px(r.px), pn(r.pn) {}
    void reset();
    T* get() const { return px; }
    T* operator->() const { return px; }
    T& operator*() const { return *px; }
    typedef T* shared_ptr::*unspecified_bool_type;
    operator unspecified_bool_type() const { return px == 0 ? 0 : &shared_ptr::px; }
};

}

namespace RBX {
struct ImageNode {
    std::vector<ImageNode*> children;
    string_ name;
};

class GuiItem { public: void addChild(boost::shared_ptr<GuiItem> item); };
string_ intToString(const unsigned int& i);
boost::shared_ptr<GuiItem> createItem(string_ name, string_ path);

class UnifiedImageWidget {
public:
    void buildTree(ImageNode* node, string_ prefix, boost::shared_ptr<GuiItem> parent);
};

void UnifiedImageWidget::buildTree(ImageNode* node, string_ prefix, boost::shared_ptr<GuiItem> parent)
{
    for (unsigned int i = 0; i < node->children.size(); ++i) {
        ImageNode* child = node->children[i];
        string_ path = prefix + " " + intToString(i);
        boost::shared_ptr<GuiItem> item = createItem(child->name, path);
        parent->addChild(item);
        buildTree(child, path, item);
    }
}
}
