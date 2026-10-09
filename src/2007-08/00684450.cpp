// from server: 100% by colin
// roc 2007-08 00684450  unit: RBX::PAVSoundChannel::?$sp_counted_impl_pd  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00684450
//
// 00684450  56                   push esi
// 00684451  8bf1                 mov esi, ecx
// 00684453  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 00684459  33c9                 xor ecx, ecx
// 0068445b  394828               cmp dword ptr [eax + 0x28], ecx
// 0068445e  0f95c1               setne cl
// 00684461  398e34010000         cmp dword ptr [esi + 0x134], ecx
// 00684467  7418                 je 0x684481
// 00684469  8bce                 mov ecx, esi
// 0068446b  e8b0e5ffff           call 0x682a20
// 00684470  83b84801000000       cmp dword ptr [eax + 0x148], 0
// 00684477  7508                 jne 0x684481
// 00684479  8bce                 mov ecx, esi
// 0068447b  5e                   pop esi
// 0068447c  e95ff7ffff           jmp 0x683be0
// 00684481  837e2000             cmp dword ptr [esi + 0x20], 0
// 00684485  741e                 je 0x6844a5
// 00684487  8bce                 mov ecx, esi
// 00684489  e892e5ffff           call 0x682a20
// 0068448e  83b84801000000       cmp dword ptr [eax + 0x148], 0
// 00684495  750e                 jne 0x6844a5
// 00684497  8b5620               mov edx, dword ptr [esi + 0x20]
// 0068449a  6a00                 push 0
// 0068449c  6a00                 push 0
// 0068449e  52                   push edx
// 0068449f  ff15dcec7700         call dword ptr [0x77ecdc]
// 006844a5  5e                   pop esi
// 006844a6  c3                   ret 

struct SoundChannel {
    char pad[0x20];
    int field_20;
    char pad2[0x130 - 0x24];
    int field_130;
    int field_134;
    char pad3[0x148 - 0x138];
    int field_148;

    void func();
};

extern "C" int (__stdcall *InvalidateRect)(void*, const void*, int);

SoundChannel* __fastcall SoundChannel_helper_682a20(SoundChannel*);
void __fastcall SoundChannel_helper_683be0(SoundChannel*);

void SoundChannel::func()
{
    int v = (*(int*)(field_130 + 0x28)) != 0;
    if (field_134 != v) {
        SoundChannel* p = SoundChannel_helper_682a20(this);
        if (p->field_148 == 0) {
            SoundChannel_helper_683be0(this);
            return;
        }
    }
    if (field_20 != 0) {
        SoundChannel* p = SoundChannel_helper_682a20(this);
        if (p->field_148 == 0) {
            InvalidateRect((void*)field_20, 0, 0);
        }
    }
}
