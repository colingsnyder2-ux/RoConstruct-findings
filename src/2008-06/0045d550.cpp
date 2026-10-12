// from server: 88% by king_originala
typedef unsigned long DWORD;
typedef unsigned int UINT;
typedef unsigned int UINT_PTR;
typedef void* HWND;
typedef void (__stdcall *TimerCallback)(HWND, UINT, UINT_PTR, DWORD);
typedef UINT_PTR (__stdcall *TimerFunction)(HWND, UINT_PTR, UINT, TimerCallback);

struct RECT {
    long left;
    long top;
    long right;
    long bottom;
};

extern "C" {
    extern DWORD (__stdcall * const GetCurrentThreadId)();
    extern int (__stdcall * const GetClientRect)(HWND, RECT*);
    extern TimerFunction const SetTimer;
}

namespace std {
    class exception {
        void* table;
        const char* message;
    public:
        exception(const exception&);
        ~exception();
    };
}

struct S {
    char padding0[0x20];
    HWND window;
    char padding1[0x38];
    int mode;
    char padding2[0x40];
    DWORD threadId;

    int defaultHandler();
    void update(int, int);
    int create(void*);
};

int S::create(void*)
{
    if (defaultHandler() == -1)
        return -1;

    threadId = GetCurrentThreadId();

    RECT rect;
    GetClientRect(window, &rect);

    try {
        update(rect.right - rect.left, rect.bottom - rect.top);
        TimerFunction timer = SetTimer;
        timer(window, 0, 200, 0);
        timer(window, 1, 100, 0);
    }
    catch (std::exception e) {
        return -1;
    }

    return 0;
}
