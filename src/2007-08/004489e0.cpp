// from server: 73% by colin
// roc 2007-08 004489e0  unit: CRbxDocTemplate  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004489e0
//
// 004489e0  8b442408             mov eax, dword ptr [esp + 8]
// 004489e4  83f802               cmp eax, 2
// 004489e7  7519                 jne 0x448a02
// 004489e9  56                   push esi
// 004489ea  8b742408             mov esi, dword ptr [esp + 8]
// 004489ee  56                   push esi
// 004489ef  b9c48f8800           mov ecx, 0x888fc4
// 004489f4  ff1508e77700         call dword ptr [0x77e708]
// 004489fa  f6d8                 neg al
// 004489fc  1bc0                 sbb eax, eax
// 004489fe  23c6                 and eax, esi
// 00448a00  5e                   pop esi
// 00448a01  c3                   ret 
// 00448a02  85c0                 test eax, eax
// 00448a04  7505                 jne 0x448a0b
// 00448a06  8b442404             mov eax, dword ptr [esp + 4]
// 00448a0a  c3                   ret 
// 00448a0b  33c0                 xor eax, eax
// 00448a0d  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

extern type_info type_info_888FC4;

int sub_4489E0(int a, int b) {
    if (a == 2) {
        if (type_info_888FC4.operator==(*(const type_info*)b)) {
            return b;
        }
        return 0;
    }
    if (a == 0) {
        return b;
    }
    return 0;
}
