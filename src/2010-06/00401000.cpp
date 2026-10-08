// from server: 66% by colin
// roc 2010-06 00401000  unit: seg_00400000  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00401000
//
// 00401000  8b442408             mov eax, dword ptr [esp + 8]
// 00401004  c3                   ret 

struct S {
    int offset_4;
};

int S_f(S* this_ptr) {
    return this_ptr->offset_4;
}
