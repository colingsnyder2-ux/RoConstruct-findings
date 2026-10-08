// from server: 77% by colin
// roc 2007-03 006e58b0  unit: seg_006e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e58b0
//
// 006e58b0  8b442404             mov eax, dword ptr [esp + 4]
// 006e58b4  8b403c               mov eax, dword ptr [eax + 0x3c]
// 006e58b7  c20400               ret 4

struct S {
    int offset_60;
};

extern "C" __declspec(dllimport) int someFunction(int);

int S_f(S* thisPtr) {
    return *(int*)((char*)thisPtr + 0x3c);
}
