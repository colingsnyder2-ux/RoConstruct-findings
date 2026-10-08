// from server: 78% by colin
// roc 2007-08 00600840  unit: RBX::VerbWidget  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00600840
//
// 00600840  56                   push esi
// 00600841  8bf1                 mov esi, ecx
// 00600843  8b06                 mov eax, dword ptr [esi]
// 00600845  8b5058               mov edx, dword ptr [eax + 0x58]
// 00600848  ffd2                 call edx
// 0060084a  84c0                 test al, al
// 0060084c  7421                 je 0x60086f
// 0060084e  83be0001000000       cmp dword ptr [esi + 0x100], 0
// 00600855  7418                 je 0x60086f
// 00600857  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0060085d  8b01                 mov eax, dword ptr [ecx]
// 0060085f  8b5008               mov edx, dword ptr [eax + 8]
// 00600862  ffd2                 call edx
// 00600864  84c0                 test al, al
// 00600866  7407                 je 0x60086f
// 00600868  b801000000           mov eax, 1
// 0060086d  5e                   pop esi
// 0060086e  c3                   ret 
// 0060086f  33c0                 xor eax, eax
// 00600871  5e                   pop esi
// 00600872  c3                   ret 

struct Widget {
    bool isEnabled();
    char field_0x100[0x100];
    void* ptr_0x100;
};

bool Widget::isEnabled()
{
    if (!((bool (__thiscall*)(Widget*))((*(void***)this)[0x58 / 4]))(this))
        goto fail;
    if (this->ptr_0x100 == 0)
        goto fail;
    if (!((bool (__thiscall*)(void*))((*(void***)this->ptr_0x100)[8 / 4]))(this->ptr_0x100))
        goto fail;
    return true;
fail:
    return false;
}
