// from server: 81% by colin
// roc 2007-08 00688710  unit: CXTPPropExchangeXMLNode  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00688710
//
// 00688710  56                   push esi
// 00688711  8bf1                 mov esi, ecx
// 00688713  e878c7ffff           call 0x684e90
// 00688718  8b06                 mov eax, dword ptr [esi]
// 0068871a  8b9090000000         mov edx, dword ptr [eax + 0x90]
// 00688720  ffd2                 call edx
// 00688722  837e4800             cmp dword ptr [esi + 0x48], 0
// 00688726  7434                 je 0x68875c
// 00688728  837e4400             cmp dword ptr [esi + 0x44], 0
// 0068872c  742e                 je 0x68875c
// 0068872e  8b4644               mov eax, dword ptr [esi + 0x44]
// 00688731  8b5648               mov edx, dword ptr [esi + 0x48]
// 00688734  8b08                 mov ecx, dword ptr [eax]
// 00688736  6a00                 push 0
// 00688738  52                   push edx
// 00688739  50                   push eax
// 0068873a  8b4150               mov eax, dword ptr [ecx + 0x50]
// 0068873d  ffd0                 call eax
// 0068873f  8b4648               mov eax, dword ptr [esi + 0x48]
// 00688742  85c0                 test eax, eax
// 00688744  740f                 je 0x688755
// 00688746  c7464800000000       mov dword ptr [esi + 0x48], 0
// 0068874d  8b08                 mov ecx, dword ptr [eax]
// 0068874f  8b5108               mov edx, dword ptr [ecx + 8]
// 00688752  50                   push eax
// 00688753  ffd2                 call edx
// 00688755  c7463400000000       mov dword ptr [esi + 0x34], 0
// 0068875c  5e                   pop esi
// 0068875d  c3                   ret 

struct CXTPPropExchangeXMLNode {
    void sub_684E90();
    void Cleanup();
};

void CXTPPropExchangeXMLNode::Cleanup()
{
    sub_684E90();

    void* p = *(void**)this;
    void (__stdcall *fn)(void*) = *(void (__stdcall **)(void*))((char*)p + 0x90);
    fn(this);

    if (*(void**)((char*)this + 0x48) == 0)
    {
        if (*(void**)((char*)this + 0x44) != 0)
        {
            void* a = *(void**)((char*)this + 0x44);
            void* b = *(void**)((char*)this + 0x48);
            void* vt = *(void**)a;
            void (__stdcall *fn2)(void*, void*, int) = *(void (__stdcall **)(void*, void*, int))((char*)vt + 0x50);
            fn2(a, b, 0);

            void* c = *(void**)((char*)this + 0x48);
            if (c != 0)
            {
                *(void**)((char*)this + 0x48) = 0;
                void* vt2 = *(void**)c;
                void (__stdcall *fn3)(void*) = *(void (__stdcall **)(void*))((char*)vt2 + 8);
                fn3(c);
            }
        }
        *(int*)((char*)this + 0x34) = 0;
    }
}
