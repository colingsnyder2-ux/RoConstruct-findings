// from server: 26% by colin
// roc 2007-03 0041e470  unit: seg_00410000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0041e470
//
// 0041e470  8b01                 mov eax, dword ptr [ecx]
// 0041e472  8a4904               mov cl, byte ptr [ecx + 4]
// 0041e475  8808                 mov byte ptr [eax], cl
// 0041e477  c3                   ret 

struct S {
    int* ptr;
    char value;
};

int S_f(S* this_) {
    *this_->ptr = this_->value;
    return 0;
}
