// from server: 36% by colin
// roc 2007-03 005abcd0  unit: seg_005a0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005abcd0
//
// 005abcd0  8b4108               mov eax, dword ptr [ecx + 8]
// 005abcd3  8a402c               mov al, byte ptr [eax + 0x2c]
// 005abcd6  c3                   ret 

struct S {
    int field1;
    int field2;
    int field3;
    int field4;
};

extern "C" __declspec(dllimport) int someFunction(int);

int S_f(S* thisPtr) {
    return *(char*)((*(int*)(thisPtr + 8)) + 0x2c);
}
