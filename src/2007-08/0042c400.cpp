// from server: 70% by colin
// roc 2007-08 0042c400  unit: VCLuaFunction::?$CComObjectNoLock  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042c400
//
// 0042c400  8b442408             mov eax, dword ptr [esp + 8]
// 0042c404  83f802               cmp eax, 2
// 0042c407  7519                 jne 0x42c422
// 0042c409  56                   push esi
// 0042c40a  8b742408             mov esi, dword ptr [esp + 8]
// 0042c40e  56                   push esi
// 0042c40f  b980688800           mov ecx, 0x886880
// 0042c414  ff1508e77700         call dword ptr [0x77e708]
// 0042c41a  f6d8                 neg al
// 0042c41c  1bc0                 sbb eax, eax
// 0042c41e  23c6                 and eax, esi
// 0042c420  5e                   pop esi
// 0042c421  c3                   ret 
// 0042c422  8b542404             mov edx, dword ptr [esp + 4]
// 0042c426  c644240800           mov byte ptr [esp + 8], 0
// 0042c42b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042c42f  51                   push ecx
// 0042c430  50                   push eax
// 0042c431  52                   push edx
// 0042c432  e889fcffff           call 0x42c0c0
// 0042c437  83c40c               add esp, 0xc
// 0042c43a  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

struct VCLuaFunction {
    int compare(int, int);
};

int __cdecl sub_42C0C0(int, int, int);

int VCLuaFunction::compare(int a, int b) {
    if (b == 2) {
        int r = (*(const type_info*)0x886880 == *(const type_info*)a) ? a : 0;
        return r;
    }
    return sub_42C0C0(a, b, 0);
}
