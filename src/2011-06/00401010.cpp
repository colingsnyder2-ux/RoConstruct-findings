// from server: 100% by tester
// roc 2011-06 00401010  unit: seg_00400000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00401010
//
// 00401010  8b01                 mov eax, dword ptr [ecx]
// 00401012  85c0                 test eax, eax
// 00401014  740c                 je 0x401022
// 00401016  83f8ff               cmp eax, -1
// 00401019  7407                 je 0x401022
// 0040101b  50                   push eax
// 0040101c  ff157c03a400         call dword ptr [0xa4037c]
// 00401022  c3                   ret 

extern "C" __declspec(dllimport) int __stdcall CloseHandle(void*);

struct S {
    void* handle;
    void f();
};

void S::f()
{
    void* h = handle;
    if (h != 0 && h != (void*)-1)
        CloseHandle(h);
}
