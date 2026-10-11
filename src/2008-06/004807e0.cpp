// from server: 47% by colin
// roc 2008-06 004807e0  unit: G3D::Win32Window  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004807e0
//
// 004807e0  83ec50               sub esp, 0x50
// 004807e3  56                   push esi
// 004807e4  57                   push edi
// 004807e5  6a50                 push 0x50
// 004807e7  8d44240c             lea eax, [esp + 0xc]
// 004807eb  6a00                 push 0
// 004807ed  50                   push eax
// 004807ee  8bf9                 mov edi, ecx
// 004807f0  e80f0f2200           call 0x6a1704
// 004807f5  8b442468             mov eax, dword ptr [esp + 0x68]
// 004807f9  8b4f04               mov ecx, dword ptr [edi + 4]
// 004807fc  8d34c500000000       lea esi, [eax*8]
// 00480803  2bf0                 sub esi, eax
// 00480805  03f6                 add esi, esi
// 00480807  03f6                 add esi, esi
// 00480809  03f6                 add esi, esi
// 0048080b  8b040e               mov eax, dword ptr [esi + ecx]
// 0048080e  8b10                 mov edx, dword ptr [eax]
// 00480810  83c40c               add esp, 0xc
// 00480813  50                   push eax
// 00480814  8b421c               mov eax, dword ptr [edx + 0x1c]
// 00480817  ffd0                 call eax
// 00480819  8b4f04               mov ecx, dword ptr [edi + 4]
// 0048081c  8b040e               mov eax, dword ptr [esi + ecx]
// 0048081f  8b10                 mov edx, dword ptr [eax]
// 00480821  50                   push eax
// 00480822  8b4264               mov eax, dword ptr [edx + 0x64]
// 00480825  ffd0                 call eax
// 00480827  8b4f04               mov ecx, dword ptr [edi + 4]
// 0048082a  8b040e               mov eax, dword ptr [esi + ecx]
// 0048082d  8b10                 mov edx, dword ptr [eax]
// 0048082f  8b5224               mov edx, dword ptr [edx + 0x24]
// 00480832  8d4c2408             lea ecx, [esp + 8]
// 00480836  51                   push ecx
// 00480837  6a50                 push 0x50
// 00480839  50                   push eax
// 0048083a  ffd2                 call edx
// 0048083c  85c0                 test eax, eax
// 0048083e  0f8595000000         jne 0x4808d9
// 00480844  53                   push ebx
// 00480845  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 00480849  50                   push eax
// 0048084a  8b4704               mov eax, dword ptr [edi + 4]
// 0048084d  8b4c0628             mov ecx, dword ptr [esi + eax + 0x28]
// 00480851  51                   push ecx
// 00480852  8bcb                 mov ecx, ebx
// 00480854  e8c7f6ffff           call 0x47ff20
// 00480859  8b5704               mov edx, dword ptr [edi + 4]
// 0048085c  33c0                 xor eax, eax
// 0048085e  39441628             cmp dword ptr [esi + edx + 0x28], eax
// 00480862  761b                 jbe 0x48087f
// 00480864  83f820               cmp eax, 0x20
// 00480867  7316                 jae 0x48087f
// 00480869  8a4c043c             mov cl, byte ptr [esp + eax + 0x3c]
// 0048086d  8b13                 mov edx, dword ptr [ebx]
// 0048086f  c0e907               shr cl, 7
// 00480872  880c10               mov byte ptr [eax + edx], cl
// 00480875  8b4f04               mov ecx, dword ptr [edi + 4]
// 00480878  40                   inc eax
// 00480879  3b440e28             cmp eax, dword ptr [esi + ecx + 0x28]
// 0048087d  72e5                 jb 0x480864
// 0048087f  8b5704               mov edx, dword ptr [edi + 4]
// 00480882  8b441624             mov eax, dword ptr [esi + edx + 0x24]
// 00480886  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 0048088a  6a00                 push 0
// 0048088c  50                   push eax
// 0048088d  8bcb                 mov ecx, ebx
// 0048088f  e8dcf4ffff           call 0x47fd70
// 00480894  8b4f04               mov ecx, dword ptr [edi + 4]
// 00480897  33c0                 xor eax, eax
// 00480899  03ce                 add ecx, esi
// 0048089b  394124               cmp dword ptr [ecx + 0x24], eax
// 0048089e  762e                 jbe 0x4808ce
// 004808a0  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 004808a3  dd0508f38100         fld qword ptr [0x81f308]
// 004808a9  8b3482               mov esi, dword ptr [edx + eax*4]
// 004808ac  8b74b40c             mov esi, dword ptr [esp + esi*4 + 0xc]
// 004808b0  81ee00800000         sub esi, 0x8000
// 004808b6  89742460             mov dword ptr [esp + 0x60], esi
// 004808ba  db442460             fild dword ptr [esp + 0x60]
// 004808be  8b33                 mov esi, dword ptr [ebx]
// 004808c0  40                   inc eax
// 004808c1  d8c9                 fmul st(1)
// 004808c3  d95c86fc             fstp dword ptr [esi + eax*4 - 4]
// 004808c7  3b4124               cmp eax, dword ptr [ecx + 0x24]
// 004808ca  72dd                 jb 0x4808a9
// 004808cc  ddd8                 fstp st(0)
// 004808ce  5b                   pop ebx
// 004808cf  5f                   pop edi
// 004808d0  b001                 mov al, 1
// 004808d2  5e                   pop esi
// 004808d3  83c450               add esp, 0x50
// 004808d6  c20c00               ret 0xc
// 004808d9  5f                   pop edi
// 004808da  32c0                 xor al, al
// 004808dc  5e                   pop esi
// 004808dd  83c450               add esp, 0x50
// 004808e0  c20c00               ret 0xc

struct Win32Window {
    char pad0[4];
    void* field4;
    char pad8[0x1e0];
    void* field1e8;
    bool method(int a, int b, int c);
};

extern "C" void __cdecl memset(void*, int, unsigned int);
extern "C" void __stdcall sub_47FF20(void*, int, int);
extern "C" void __stdcall sub_47FD70(void*, int, int);

bool Win32Window::method(int a, int b, int c) {
    char buf[0x50];
    memset(buf, 0, 0x50);

    int idx = a;
    int offset = idx * 8;
    offset -= idx;
    offset += offset;
    offset += offset;
    offset += offset;

    void** arr = (void**)((char*)field4 + offset);
    void* obj = *arr;

    void** vtable = *(void***)obj;
    typedef void (__stdcall *Fn1)(void*);
    Fn1 fn1 = (Fn1)vtable[7];
    fn1(obj);

    vtable = *(void***)obj;
    typedef void (__stdcall *Fn2)(void*);
    Fn2 fn2 = (Fn2)vtable[0x19];
    fn2(obj);

    vtable = *(void***)obj;
    typedef int (__stdcall *Fn3)(void*, int, void*);
    Fn3 fn3 = (Fn3)vtable[9];
    int result = fn3(obj, 0x50, buf + 4);
    if (result != 0) {
        return false;
    }

    int count = *(int*)((char*)field4 + offset + 0x28);
    sub_47FF20((void*)b, count, 0);

    unsigned int i = 0;
    while (i < (unsigned int)*(int*)((char*)field4 + offset + 0x28)) {
        if (i >= 0x20) break;
        unsigned char v = (unsigned char)buf[i + 0x34];
        v = v >> 7;
        ((unsigned char*)b)[i] = v;
        i++;
    }

    int count2 = *(int*)((char*)field4 + offset + 0x24);
    sub_47FD70((void*)c, count2, 0);

    int j = 0;
    while (j < *(int*)((char*)field4 + offset + 0x24)) {
        int* indices = *(int**)((char*)field4 + offset + 0x2c);
        int index = indices[j];
        int val = *(int*)(buf + index * 4);
        val -= 0x8000;
        float f = (float)val;
        f = f * 1.52587890625e-05f;
        ((float*)c)[j] = f;
        j++;
    }

    return true;
}
