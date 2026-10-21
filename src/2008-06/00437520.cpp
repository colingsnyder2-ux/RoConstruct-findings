// from server: 90% by EspClaude
// roc-flags: /O2 /GS- /EHsc /MD
#include <deque>
#include <time.h>

template <class T> class bstr {
public:
    __declspec(noinline) bstr() { _Mysize = 0; }
    __declspec(noinline) ~bstr() { _Mysize = 0; }
    __declspec(noinline) bstr& operator=(const bstr& r) { _Mysize = r._Mysize; return *this; }
    __declspec(noinline) const T* c_str() const { return _Buf; }
    void* _Myaux;
    T _Buf[16];
    unsigned int _Mysize;
    unsigned int _Myres;
};
extern template class __declspec(dllimport) bstr<char>;
typedef bstr<char> string_;

struct lock_error { lock_error(); };
struct mutex {
    void* m_mutex;
    bool m_critical_section;
    void do_lock();
    void do_unlock();
};
struct scoped_lock {
    mutex& m_mutex;
    bool m_locked;
    explicit scoped_lock(mutex& mx) : m_mutex(mx), m_locked(false) { lock(); }
    ~scoped_lock() { if (m_locked) unlock(); }
    void lock() { if (m_locked) throw lock_error(); m_mutex.do_lock(); m_locked = true; }
    void unlock() { if (!m_locked) throw lock_error(); m_mutex.do_unlock(); m_locked = false; }
};

struct OutputItem {
    int type;
    string_ message;
    __time64_t time;
};

class CStandardOutputView {
public:
    char pad0[0x124];
    std::deque<OutputItem> items;
    mutex itemsMutex;
    void appendText(int type, const char* text, __time64_t time);
    long OnAppendText(unsigned int wParam, long lParam);
};

long CStandardOutputView::OnAppendText(unsigned int, long)
{
    while (true) {
        string_ message;
        int type;
        __time64_t time;
        {
            scoped_lock lock(itemsMutex);
            if (items.empty())
                return 0;
            if (items.size() > 250) {
                items.pop_front();
                continue;
            }
            type = items.front().type;
            message = items.front().message;
            time = items.front().time;
            items.pop_front();
        }
        appendText(type, message.c_str(), time);
    }
    return 0;
}
