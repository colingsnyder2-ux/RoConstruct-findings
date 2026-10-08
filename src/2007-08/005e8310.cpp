// from server: 79% by colin
// roc 2007-08 005e8310  unit: RBX::VInstance::$$A6AXV?$shared_ptr::V?$function::?$holder  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e8310
//
// 005e8310  8b442408             mov eax, dword ptr [esp + 8]
// 005e8314  83f802               cmp eax, 2
// 005e8317  7519                 jne 0x5e8332
// 005e8319  56                   push esi
// 005e831a  8b742408             mov esi, dword ptr [esp + 8]
// 005e831e  56                   push esi
// 005e831f  b928ea8a00           mov ecx, 0x8aea28
// 005e8324  ff1508e77700         call dword ptr [0x77e708]
// 005e832a  f6d8                 neg al
// 005e832c  1bc0                 sbb eax, eax
// 005e832e  23c6                 and eax, esi
// 005e8330  5e                   pop esi
// 005e8331  c3                   ret 
// 005e8332  8b542404             mov edx, dword ptr [esp + 4]
// 005e8336  c644240800           mov byte ptr [esp + 8], 0
// 005e833b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e833f  51                   push ecx
// 005e8340  50                   push eax
// 005e8341  52                   push edx
// 005e8342  e8a99d0000           call 0x5f20f0
// 005e8347  83c40c               add esp, 0xc
// 005e834a  c3                   ret 

struct type_info;

extern "C" {
    bool __stdcall type_info_equal(const type_info* self, const type_info* other);
}

extern "C" int __cdecl func_005f20f0(int, int, int);

struct S {
    int f(int a, int b, int c);
};

int S::f(int a, int b, int c)
{
    if (c == 2) {
        int r = b;
        bool eq = type_info_equal((const type_info*)0x8aea28, (const type_info*)b);
        return eq ? r : 0;
    }
    char local = 0;
    return func_005f20f0(a, c, *(int*)&local);
}
