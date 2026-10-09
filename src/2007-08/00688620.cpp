// from server: 86% by colin
// roc 2007-08 00688620  unit: CXTPPropExchangeXMLNode  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00688620
//
// 00688620  83794000             cmp dword ptr [ecx + 0x40], 0
// 00688624  56                   push esi
// 00688625  8d7140               lea esi, [ecx + 0x40]
// 00688628  7536                 jne 0x688660
// 0068862a  6a17                 push 0x17
// 0068862c  6a00                 push 0
// 0068862e  68d45a7900           push 0x795ad4
// 00688633  8bce                 mov ecx, esi
// 00688635  e816f3ffff           call 0x687950
// 0068863a  85c0                 test eax, eax
// 0068863c  7d04                 jge 0x688642
// 0068863e  33c0                 xor eax, eax
// 00688640  5e                   pop esi
// 00688641  c3                   ret 
// 00688642  833e00               cmp dword ptr [esi], 0
// 00688645  750a                 jne 0x688651
// 00688647  6803400080           push 0x80004003
// 0068864c  e84f93faff           call 0x6319a0
// 00688651  8b36                 mov esi, dword ptr [esi]
// 00688653  8b06                 mov eax, dword ptr [esi]
// 00688655  8b8820010000         mov ecx, dword ptr [eax + 0x120]
// 0068865b  6aff                 push -1
// 0068865d  56                   push esi
// 0068865e  ffd1                 call ecx
// 00688660  b801000000           mov eax, 1
// 00688665  5e                   pop esi
// 00688666  c3                   ret 

struct CXTPPropExchangeXMLNode {
    int field0[16];
    void* field40;
    int EnsureLoaded();
};

extern "C" int __stdcall sub_687950(void* p, int a, int b);
extern "C" void __stdcall sub_6319A0(unsigned int hr);

int CXTPPropExchangeXMLNode::EnsureLoaded()
{
    if (field40 == 0)
    {
        int hr = sub_687950(&field40, 0, 0x795ad4);
        if (hr < 0)
            return 0;
        if (field40 == 0)
            sub_6319A0(0x80004003);
        void** p = (void**)field40;
        void* obj = *p;
        int (__stdcall *fn)(void*, int) = *(int (__stdcall **)(void*, int))((char*)obj + 0x120);
        fn(p, -1);
    }
    return 1;
}
