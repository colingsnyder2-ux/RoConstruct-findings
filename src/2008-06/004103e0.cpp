// from server: 100% by colin
// roc 2008-06 004103e0  unit: VCBrowserViewExternal::?$CComObject  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004103e0
//
// 004103e0  55                   push ebp
// 004103e1  8bec                 mov ebp, esp
// 004103e3  6aff                 push -1
// 004103e5  686bd57b00           push 0x7bd56b
// 004103ea  64a100000000         mov eax, dword ptr fs:[0]
// 004103f0  50                   push eax
// 004103f1  64892500000000       mov dword ptr fs:[0], esp
// 004103f8  83ec0c               sub esp, 0xc
// 004103fb  53                   push ebx
// 004103fc  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 004103ff  56                   push esi
// 00410400  33f6                 xor esi, esi
// 00410402  57                   push edi
// 00410403  8965f0               mov dword ptr [ebp - 0x10], esp
// 00410406  3bde                 cmp ebx, esi
// 00410408  7518                 jne 0x410422
// 0041040a  b803400080           mov eax, 0x80004003
// 0041040f  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00410412  64890d00000000       mov dword ptr fs:[0], ecx
// 00410419  5f                   pop edi
// 0041041a  5e                   pop esi
// 0041041b  5b                   pop ebx
// 0041041c  8be5                 mov esp, ebp
// 0041041e  5d                   pop ebp
// 0041041f  c20c00               ret 0xc
// 00410422  bf0e000780           mov edi, 0x8007000e
// 00410427  6a28                 push 0x28
// 00410429  8933                 mov dword ptr [ebx], esi
// 0041042b  897d10               mov dword ptr [ebp + 0x10], edi
// 0041042e  8975fc               mov dword ptr [ebp - 4], esi
// 00410431  e8ea042900           call 0x6a0920
// 00410436  8bc8                 mov ecx, eax
// 00410438  83c404               add esp, 4
// 0041043b  894dec               mov dword ptr [ebp - 0x14], ecx
// 0041043e  c645fc01             mov byte ptr [ebp - 4], 1
// 00410442  3bce                 cmp ecx, esi
// 00410444  740b                 je 0x410451
// 00410446  8b4508               mov eax, dword ptr [ebp + 8]
// 00410449  50                   push eax
// 0041044a  e811f6ffff           call 0x40fa60
// 0041044f  8bf0                 mov esi, eax
// 00410451  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00410458  85f6                 test esi, esi
// 0041045a  7430                 je 0x41048c
// 0041045c  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0041045f  8b0e                 mov ecx, dword ptr [esi]
// 00410461  8b01                 mov eax, dword ptr [ecx]
// 00410463  53                   push ebx
// 00410464  52                   push edx
// 00410465  56                   push esi
// 00410466  ffd0                 call eax
// 00410468  8bf8                 mov edi, eax
// 0041046a  85ff                 test edi, edi
// 0041046c  741e                 je 0x41048c
// 0041046e  8b16                 mov edx, dword ptr [esi]
// 00410470  8b420c               mov eax, dword ptr [edx + 0xc]
// 00410473  6a01                 push 1
// 00410475  8bce                 mov ecx, esi
// 00410477  ffd0                 call eax
// 00410479  eb11                 jmp 0x41048c
// 0041047b  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0041047e  e8cd042900           call 0x6a0950
// 00410483  b889044100           mov eax, 0x410489
// 00410488  c3                   ret 
// 00410489  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 0041048c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0041048f  8bc7                 mov eax, edi
// 00410491  5f                   pop edi
// 00410492  5e                   pop esi
// 00410493  64890d00000000       mov dword ptr fs:[0], ecx
// 0041049a  5b                   pop ebx
// 0041049b  8be5                 mov esp, ebp
// 0041049d  5d                   pop ebp
// 0041049e  c20c00               ret 0xc

struct __RocException { long status; __RocException(const __RocException&); ~__RocException(); };
// from server: 97% by king_originala
typedef long HRESULT;

struct Object;

struct ObjectTable {
    HRESULT (__stdcall *query)(Object *, const void *, void **);
    void *reserved[2];
    void *(__thiscall *destroy)(Object *, unsigned int);
};

struct Object {
    ObjectTable *table;
    unsigned char storage[36];
    Object(void *);
};

extern "C" HRESULT __stdcall CreateObject(void *, const void *, void **);

HRESULT __stdcall CreateObject(void *context, const void *iid, void **result)
{
    if (!result)
        return (HRESULT)0x80004003L;

    *result = 0;
    HRESULT status = (HRESULT)0x8007000EL;
    Object *object = 0;

    try {
        object = new Object(context);
    }
    catch (__RocException __rocException) {
    }

    if (object) {
        status = object->table->query(object, iid, result);
        if (status != 0)
            object->table->destroy(object, 1);
    }

    return status;
}
