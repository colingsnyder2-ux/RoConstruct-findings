// from server: 98% by colin
// roc 2007-08 00417240  unit: boost::X::U?$last_value::?$holder  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00417240
//
// 00417240  8b442408             mov eax, dword ptr [esp + 8]
// 00417244  83f802               cmp eax, 2
// 00417247  7519                 jne 0x417262
// 00417249  56                   push esi
// 0041724a  8b742408             mov esi, dword ptr [esp + 8]
// 0041724e  56                   push esi
// 0041724f  b990378800           mov ecx, 0x883790
// 00417254  ff1508e77700         call dword ptr [0x77e708]
// 0041725a  f6d8                 neg al
// 0041725c  1bc0                 sbb eax, eax
// 0041725e  23c6                 and eax, esi
// 00417260  5e                   pop esi
// 00417261  c3                   ret 
// 00417262  85c0                 test eax, eax
// 00417264  7517                 jne 0x41727d
// 00417266  6a01                 push 1
// 00417268  e8898c2100           call 0x62fef6
// 0041726d  83c404               add esp, 4
// 00417270  85c0                 test eax, eax
// 00417272  7418                 je 0x41728c
// 00417274  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00417278  8a11                 mov dl, byte ptr [ecx]
// 0041727a  8810                 mov byte ptr [eax], dl
// 0041727c  c3                   ret 
// 0041727d  8b442404             mov eax, dword ptr [esp + 4]
// 00417281  50                   push eax
// 00417282  e8db892100           call 0x62fc62
// 00417287  83c404               add esp, 4
// 0041728a  33c0                 xor eax, eax
// 0041728c  c3                   ret 

extern "C" int __cdecl func_0062fef6(int);
extern "C" int __cdecl func_0062fc62(int);

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern type_info type_info_00883790;
extern bool (__thiscall* ptr_0077e708)(const type_info*, const type_info*);

int __cdecl func_00417240(int a, int b)
{
    if (b == 2) {
        int v = a;
        bool r = ptr_0077e708(&type_info_00883790, (const type_info*)v);
        return r ? v : 0;
    }
    if (b == 0) {
        int p = func_0062fef6(1);
        if (p != 0)
            *(char*)p = *(char*)a;
        return p;
    }
    func_0062fc62(a);
    return 0;
}
