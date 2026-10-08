// from server: 69% by colin
// roc 2007-08 004940b0  unit: RBX::VInstance::$$A6AXV?$shared_ptr::V?$function::?$holder  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004940b0
//
// 004940b0  8b442408             mov eax, dword ptr [esp + 8]
// 004940b4  83f802               cmp eax, 2
// 004940b7  7519                 jne 0x4940d2
// 004940b9  56                   push esi
// 004940ba  8b742408             mov esi, dword ptr [esp + 8]
// 004940be  56                   push esi
// 004940bf  b9f8eb8800           mov ecx, 0x88ebf8
// 004940c4  ff1508e77700         call dword ptr [0x77e708]
// 004940ca  f6d8                 neg al
// 004940cc  1bc0                 sbb eax, eax
// 004940ce  23c6                 and eax, esi
// 004940d0  5e                   pop esi
// 004940d1  c3                   ret 
// 004940d2  8b542404             mov edx, dword ptr [esp + 4]
// 004940d6  c644240800           mov byte ptr [esp + 8], 0
// 004940db  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004940df  51                   push ecx
// 004940e0  50                   push eax
// 004940e1  52                   push edx
// 004940e2  e809e01500           call 0x5f20f0
// 004940e7  83c40c               add esp, 0xc
// 004940ea  c3                   ret 

extern "C" {
    typedef unsigned int DWORD;
    typedef unsigned char BYTE;
}

struct type_info;

extern "C" bool __stdcall type_info_equal(const type_info* self, const type_info* other);

extern "C" int __cdecl func_5f20f0(int a, int b, int c);

struct RBX_GenericSlotAdapter {
    int compare(int a, int b);
};

int RBX_GenericSlotAdapter::compare(int a, int b)
{
    if (b == 2) {
        int v = a;
        bool eq = type_info_equal((const type_info*)0x88ebf8, (const type_info*)v);
        return eq ? v : 0;
    }
    return func_5f20f0(a, b, 0);
}
