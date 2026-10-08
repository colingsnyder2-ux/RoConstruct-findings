// from server: 100% by auto
// roc 2007-08 00684ea0  unit: CXTPPropExchange  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00684ea0
//
// 00684ea0  0fb7442404           movzx eax, word ptr [esp + 4]
// 00684ea5  83c0fe               add eax, -2
// 00684ea8  83f863               cmp eax, 0x63
// 00684eab  773e                 ja 0x684eeb
// 00684ead  0fb6800c4f6800       movzx eax, byte ptr [eax + 0x684f0c]
// 00684eb4  ff2485f04e6800       jmp dword ptr [eax*4 + 0x684ef0]
// 00684ebb  b804000000           mov eax, 4
// 00684ec0  c20400               ret 4
// 00684ec3  b801000000           mov eax, 1
// 00684ec8  c20400               ret 4
// 00684ecb  b802000000           mov eax, 2
// 00684ed0  c20400               ret 4
// 00684ed3  b808000000           mov eax, 8
// 00684ed8  c20400               ret 4
// 00684edb  b810000000           mov eax, 0x10
// 00684ee0  c20400               ret 4
// 00684ee3  b80c000000           mov eax, 0xc
// 00684ee8  c20400               ret 4
// 00684eeb  33c0                 xor eax, eax
// 00684eed  c20400               ret 4
// 00684ef0  cb                   retf 
// 00684ef1  4e                   dec esi
// 00684ef2  6800bb4e68           push 0x684ebb00
// 00684ef7  00d3                 add bl, dl
// 00684ef9  4e                   dec esi
// 00684efa  6800e34e68           push 0x684ee300
// 00684eff  00db                 add bl, bl
// 00684f01  4e                   dec esi
// 00684f02  6800c34e68           push 0x684ec300
// 00684f07  00eb                 add bl, ch
// 00684f09  4e                   dec esi
// 00684f0a  6800000101           push 0x1010000
// 00684f0f  0202                 add al, byte ptr [edx]
// 00684f11  0301                 add eax, dword ptr [ecx]
// 00684f13  06                   push es
// 00684f14  06                   push es
// 00684f15  010406               add dword ptr [esi + eax], eax
// 00684f18  06                   push es
// 00684f19  06                   push es
// 00684f1a  06                   push es
// 00684f1b  0506060606           add eax, 0x6060606
// 00684f20  06                   push es
// 00684f21  06                   push es
// 00684f22  06                   push es
// 00684f23  06                   push es
// 00684f24  06                   push es
// 00684f25  06                   push es
// 00684f26  06                   push es
// 00684f27  06                   push es
// 00684f28  06                   push es
// 00684f29  06                   push es
// 00684f2a  06                   push es
// 00684f2b  06                   push es
// 00684f2c  06                   push es
// 00684f2d  06                   push es
// 00684f2e  06                   push es
// 00684f2f  06                   push es
// 00684f30  06                   push es
// 00684f31  06                   push es
// 00684f32  06                   push es
// 00684f33  06                   push es
// 00684f34  06                   push es
// 00684f35  06                   push es
// 00684f36  06                   push es
// 00684f37  06                   push es
// 00684f38  06                   push es
// 00684f39  06                   push es
// 00684f3a  06                   push es
// 00684f3b  06                   push es
// 00684f3c  06                   push es
// 00684f3d  06                   push es
// 00684f3e  06                   push es
// 00684f3f  06                   push es
// 00684f40  06                   push es
// 00684f41  06                   push es
// 00684f42  06                   push es
// 00684f43  06                   push es
// 00684f44  06                   push es
// 00684f45  06                   push es
// 00684f46  06                   push es
// 00684f47  06                   push es
// 00684f48  06                   push es
// 00684f49  06                   push es
// 00684f4a  06                   push es
// 00684f4b  06                   push es
// 00684f4c  06                   push es
// 00684f4d  06                   push es
// 00684f4e  06                   push es
// 00684f4f  06                   push es
// 00684f50  06                   push es
// 00684f51  06                   push es
// 00684f52  06                   push es
// 00684f53  06                   push es
// 00684f54  06                   push es
// 00684f55  06                   push es
// 00684f56  06                   push es
// 00684f57  06                   push es
// 00684f58  06                   push es
// 00684f59  06                   push es
// 00684f5a  06                   push es
// 00684f5b  06                   push es
// 00684f5c  06                   push es
// 00684f5d  06                   push es
// 00684f5e  06                   push es
// 00684f5f  06                   push es
// 00684f60  06                   push es
// 00684f61  06                   push es
// 00684f62  06                   push es
// 00684f63  06                   push es
// 00684f64  06                   push es
// 00684f65  06                   push es
// 00684f66  06                   push es
// 00684f67  06                   push es
// 00684f68  06                   push es
// 00684f69  06                   push es
// 00684f6a  06                   push es
// 00684f6b  06                   push es
// 00684f6c  06                   push es
// 00684f6d  06                   push es
// 00684f6e  0402                 add al, 2
// library xtp-11.2.2-vc8/Source\Common\XTPPropExchange.cpp (function ?GetSizeOfVarType@CXTPPropExchange@@IAEKG@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPPropExchange.cpp
