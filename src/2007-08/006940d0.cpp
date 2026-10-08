// from server: 69% by colin
// roc 2007-08 006940d0  unit: CXTPStatusBar  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006940d0
//
// 006940d0  8b818c000000         mov eax, dword ptr [ecx + 0x8c]
// 006940d6  83f8ff               cmp eax, -1
// 006940d9  750e                 jne 0x6940e9
// 006940db  e8904efdff           call 0x668f70
// 006940e0  6a18                 push 0x18
// 006940e2  8bc8                 mov ecx, eax
// 006940e4  e88746fdff           call 0x668770
// 006940e9  c3                   ret 

struct T_func_006940d0 {
    char pad[0x8c];
    int field_0x8c;
    void m();
};

extern "C" void* __stdcall func_00668f70();
extern "C" void* __stdcall func_00668770(void*, int);

void T_func_006940d0::m()
{
    if (field_0x8c == -1) {
        void* p = func_00668f70();
        func_00668770(p, 0x18);
    }
}
