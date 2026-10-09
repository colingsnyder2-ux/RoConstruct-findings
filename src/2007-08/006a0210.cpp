// from server: 76% by colin
// roc 2007-08 006a0210  unit: CSelectionCaption  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a0210
//
// 006a0210  56                   push esi
// 006a0211  8bf1                 mov esi, ecx
// 006a0213  f686c800000004       test byte ptr [esi + 0xc8], 4
// 006a021a  7441                 je 0x6a025d
// 006a021c  8b4638               mov eax, dword ptr [esi + 0x38]
// 006a021f  85c0                 test eax, eax
// 006a0221  57                   push edi
// 006a0222  750a                 jne 0x6a022e
// 006a0224  8b4620               mov eax, dword ptr [esi + 0x20]
// 006a0227  50                   push eax
// 006a0228  ff15f8eb7700         call dword ptr [0x77ebf8]
// 006a022e  50                   push eax
// 006a022f  e88cfff8ff           call 0x6301c0
// 006a0234  8bf8                 mov edi, eax
// 006a0236  85ff                 test edi, edi
// 006a0238  7420                 je 0x6a025a
// 006a023a  53                   push ebx
// 006a023b  8b5e20               mov ebx, dword ptr [esi + 0x20]
// 006a023e  8bce                 mov ecx, esi
// 006a0240  e86b830900           call 0x7385b0
// 006a0245  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 006a0248  0fb7c0               movzx eax, ax
// 006a024b  53                   push ebx
// 006a024c  50                   push eax
// 006a024d  6811010000           push 0x111
// 006a0252  51                   push ecx
// 006a0253  ff15d8ec7700         call dword ptr [0x77ecd8]
// 006a0259  5b                   pop ebx
// 006a025a  5f                   pop edi
// 006a025b  5e                   pop esi
// 006a025c  c3                   ret 
// 006a025d  8b16                 mov edx, dword ptr [esi]
// 006a025f  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 006a0265  5e                   pop esi
// 006a0266  ffe0                 jmp eax

struct CSelectionCaption {
    void func_006a0210();
};

extern "C" void* __stdcall GetParent(void*);
extern "C" long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

extern "C" void* __stdcall sub_006301C0(void*);
extern "C" unsigned short __stdcall sub_007385B0();

void CSelectionCaption::func_006a0210()
{
    if ((*(unsigned char*)((char*)this + 0xc8) & 4) != 0)
    {
        void* p = *(void**)((char*)this + 0x38);
        if (p == 0)
        {
            p = GetParent(*(void**)((char*)this + 0x20));
        }
        void* q = sub_006301C0(p);
        if (q != 0)
        {
            void* hwnd = *(void**)((char*)this + 0x20);
            unsigned short id = sub_007385B0();
            SendMessageA(*(void**)((char*)q + 0x20), 0x111, id, (long)hwnd);
        }
    }
    else
    {
        void** vt = *(void***)this;
        void (*fn)() = *(void (**)())((char*)vt + 0x154);
        fn();
    }
}
