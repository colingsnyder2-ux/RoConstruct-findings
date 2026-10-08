// from server: 50% by colin
// roc 2007-03 004c4860  unit: seg_004c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c4860
//
// 004c4860  8b4160               mov eax, dword ptr [ecx + 0x60]
// 004c4863  8a80dd010000         mov al, byte ptr [eax + 0x1dd]
// 004c4869  c3                   ret 

struct S {
    int field_60;
};

extern "C" __declspec(dllimport) int imported_function();

int S_f(S* this_ptr) {
    int eax = this_ptr->field_60;
    int al = *(unsigned char*)(eax + 0x1dd);
    return al;
}
