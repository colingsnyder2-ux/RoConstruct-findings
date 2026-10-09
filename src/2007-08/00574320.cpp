// from server: 63% by colin
// roc 2007-08 00574320  unit: RBX::PartInstance  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00574320
//
// 00574320  83ec68               sub esp, 0x68
// 00574323  56                   push esi
// 00574324  8bf1                 mov esi, ecx
// 00574326  807e6800             cmp byte ptr [esi + 0x68], 0
// 0057432a  742f                 je 0x57435b
// 0057432c  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0057432f  8b90ec000000         mov edx, dword ptr [eax + 0xec]
// 00574335  8d4c2404             lea ecx, [esp + 4]
// 00574339  51                   push ecx
// 0057433a  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 0057433d  8b140a               mov edx, dword ptr [edx + ecx]
// 00574340  035674               add edx, dword ptr [esi + 0x74]
// 00574343  8d8c02ec000000       lea ecx, [edx + eax + 0xec]
// 0057434a  8b4670               mov eax, dword ptr [esi + 0x70]
// 0057434d  ffd0                 call eax
// 0057434f  50                   push eax
// 00574350  8bce                 mov ecx, esi
// 00574352  e8c9f5ffff           call 0x573920
// 00574357  c6466800             mov byte ptr [esi + 0x68], 0
// 0057435b  56                   push esi
// 0057435c  8b742474             mov esi, dword ptr [esp + 0x74]
// 00574360  8bce                 mov ecx, esi
// 00574362  e849f6ffff           call 0x5739b0
// 00574367  8bc6                 mov eax, esi
// 00574369  5e                   pop esi
// 0057436a  83c468               add esp, 0x68
// 0057436d  c20400               ret 4

struct PartInstance {
    char pad[0x68];
    bool flag68;
    char pad2[3];
    void* ptr6c;
    int (__thiscall *fn70)(void*, void*);
    int field74;
    int field78;

    PartInstance* sub_573920(void*);
    PartInstance* sub_5739B0(PartInstance*);
    PartInstance* func_00574320(PartInstance*);
};

PartInstance* PartInstance::func_00574320(PartInstance* other)
{
    if (this->flag68) {
        char* base = (char*)this->ptr6c;
        int* vtbl = *(int**)(base + 0xec);
        int idx = this->field78;
        int off = vtbl[idx];
        off += this->field74;
        void* arg = base + 0xec + off;
        int result = this->fn70(this, arg);
        this->sub_573920((void*)result);
        this->flag68 = false;
    }
    this->sub_5739B0(other);
    return other;
}
