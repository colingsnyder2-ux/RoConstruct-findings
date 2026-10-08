// from server: 37% by colin
// roc 2011-06 008b8300  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b8300
//
// 008b8300  8b01                 mov eax, dword ptr [ecx]
// 008b8302  8b4078               mov eax, dword ptr [eax + 0x78]
// 008b8305  ffe0                 jmp eax

struct PAVCXTPReportHyperlink {
    int* vtable;
};

extern "C" __declspec(dllimport) void __stdcall func_008b8300(int);

int func_008b8300(PAVCXTPReportHyperlink* thisPtr) {
    int* vtable = thisPtr->vtable;
    int (*func)() = (int(*)())(vtable[0x1E]);
    return func();
}
