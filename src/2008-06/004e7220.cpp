// from server: 61% by colin
// roc 2008-06 004e7220  unit: RBX::ViewNew::Texture  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e7220
//
// 004e7220  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e7224  83f803               cmp eax, 3
// 004e7227  7441                 je 0x4e726a
// 004e7229  85c0                 test eax, eax
// 004e722b  7517                 jne 0x4e7244
// 004e722d  8b442408             mov eax, dword ptr [esp + 8]
// 004e7231  85c0                 test eax, eax
// 004e7233  743f                 je 0x4e7274
// 004e7235  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e7239  8b11                 mov edx, dword ptr [ecx]
// 004e723b  8910                 mov dword ptr [eax], edx
// 004e723d  8b4904               mov ecx, dword ptr [ecx + 4]
// 004e7240  894804               mov dword ptr [eax + 4], ecx
// 004e7243  c3                   ret 
// 004e7244  83f801               cmp eax, 1
// 004e7247  742b                 je 0x4e7274
// 004e7249  56                   push esi
// 004e724a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004e724e  8b0e                 mov ecx, dword ptr [esi]
// 004e7250  6818199400           push 0x941918
// 004e7255  ff1578288000         call dword ptr [0x802878]
// 004e725b  0fb6d0               movzx edx, al
// 004e725e  f7da                 neg edx
// 004e7260  1bd2                 sbb edx, edx
// 004e7262  23542408             and edx, dword ptr [esp + 8]
// 004e7266  8916                 mov dword ptr [esi], edx
// 004e7268  5e                   pop esi
// 004e7269  c3                   ret 
// 004e726a  8b442408             mov eax, dword ptr [esp + 8]
// 004e726e  c70018199400         mov dword ptr [eax], 0x941918
// 004e7274  c3                   ret 

struct type_info;

extern "C" {
    int __stdcall type_info_equals(const type_info* self, const type_info* other);
}

struct S {
};

void __cdecl f(int a, int b, int c)
{
    if (c == 3) {
        *(int*)b = 0x941918;
        return;
    }
    if (c == 0) {
        if (b == 0)
            return;
        *(int*)b = *(int*)a;
        *(int*)(b + 4) = *(int*)(a + 4);
        return;
    }
    if (c == 1)
        return;
    {
        int* p = (int*)a;
        int v = *p;
        int r = type_info_equals((const type_info*)v, (const type_info*)0x941918);
        unsigned char al = (unsigned char)r;
        int neg = -(int)al;
        int mask = neg | (neg >> 31);
        *p = mask & b;
    }
}
