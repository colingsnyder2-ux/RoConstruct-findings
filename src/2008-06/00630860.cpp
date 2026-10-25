// from server: 100% by colin
// roc 2008-06 00630860  unit: RBX::VRocket::?$FactoryProduct  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00630860
//
// 00630860  680c789700           push 0x97780c
// 00630865  68d0ff5b00           push 0x5bffd0
// 0063086a  e8c16af2ff           call 0x557330
// 0063086f  e82cf2f8ff           call 0x5bfaa0
// 00630874  6818789700           push 0x977818
// 00630879  6800005c00           push 0x5c0000
// 0063087e  e8ad6af2ff           call 0x557330
// 00630883  e868f3f8ff           call 0x5bfbf0
// 00630888  681c789700           push 0x97781c
// 0063088d  6810005c00           push 0x5c0010
// 00630892  e8996af2ff           call 0x557330
// 00630897  e8c4f3f8ff           call 0x5bfc60
// 0063089c  6820789700           push 0x977820
// 006308a1  6820005c00           push 0x5c0020
// 006308a6  e8856af2ff           call 0x557330
// 006308ab  e820f4f8ff           call 0x5bfcd0
// 006308b0  6810789700           push 0x977810
// 006308b5  68e0ff5b00           push 0x5bffe0
// 006308ba  e8716af2ff           call 0x557330
// 006308bf  e84cf2f8ff           call 0x5bfb10
// 006308c4  6814789700           push 0x977814
// 006308c9  68f0ff5b00           push 0x5bfff0
// 006308ce  e85d6af2ff           call 0x557330
// 006308d3  e8a8f2f8ff           call 0x5bfb80
// 006308d8  6824789700           push 0x977824
// 006308dd  6830005c00           push 0x5c0030
// 006308e2  e8496af2ff           call 0x557330
// 006308e7  83c438               add esp, 0x38
// 006308ea  e951f4f8ff           jmp 0x5bfd40

extern "C" void __cdecl sub_557330(void*, void*);
extern "C" void __cdecl sub_5BFAA0();
extern "C" void __cdecl sub_5BFB10();
extern "C" void __cdecl sub_5BFB80();
extern "C" void __cdecl sub_5BFBF0();
extern "C" void __cdecl sub_5BFC60();
extern "C" void __cdecl sub_5BFCD0();
extern "C" void __cdecl sub_5BFD40();

struct RBX_VRocket_FactoryProduct {
    void Init();
};

void RBX_VRocket_FactoryProduct::Init()
{
    sub_557330((void*)0x97780c, (void*)0x5bffd0);
    sub_5BFAA0();
    sub_557330((void*)0x977818, (void*)0x5c0000);
    sub_5BFBF0();
    sub_557330((void*)0x97781c, (void*)0x5c0010);
    sub_5BFC60();
    sub_557330((void*)0x977820, (void*)0x5c0020);
    sub_5BFCD0();
    sub_557330((void*)0x977810, (void*)0x5bffe0);
    sub_5BFB10();
    sub_557330((void*)0x977814, (void*)0x5bfff0);
    sub_5BFB80();
    sub_557330((void*)0x977824, (void*)0x5c0030);
    sub_5BFD40();
}
