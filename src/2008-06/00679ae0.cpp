// from server: 100% by EspClaude
// roc 2008-06 00679ae0  unit: Ogre::RbxSceneManagerFactory  size: 907 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00679ae0
//
// 00679ae0  6aff                 push -1
// 00679ae2  6887d27d00           push 0x7dd287
// 00679ae7  64a100000000         mov eax, dword ptr fs:[0]
// 00679aed  50                   push eax
// 00679aee  64892500000000       mov dword ptr fs:[0], esp
// 00679af5  83ec3c               sub esp, 0x3c
// 00679af8  53                   push ebx
// 00679af9  55                   push ebp
// 00679afa  56                   push esi
// 00679afb  57                   push edi
// 00679afc  ff15e4438000         call dword ptr [0x8043e4]
// 00679b02  8bc8                 mov ecx, eax
// 00679b04  ff15ac4e8000         call dword ptr [0x804eac]
// 00679b0a  6a38                 push 0x38
// 00679b0c  89442414             mov dword ptr [esp + 0x14], eax
// 00679b10  e80b6e0200           call 0x6a0920
// 00679b15  83c404               add esp, 4
// 00679b18  89442414             mov dword ptr [esp + 0x14], eax
// 00679b1c  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00679b24  85c0                 test eax, eax
// 00679b26  740c                 je 0x679b34
// 00679b28  8bc8                 mov ecx, eax
// 00679b2a  ff15e0438000         call dword ptr [0x8043e0]
// 00679b30  8bd8                 mov ebx, eax
// 00679b32  eb02                 jmp 0x679b36
// 00679b34  33db                 xor ebx, ebx
// 00679b36  8b442460             mov eax, dword ptr [esp + 0x60]
// 00679b3a  8b33                 mov esi, dword ptr [ebx]
// 00679b3c  6a00                 push 0
// 00679b3e  bd01000000           mov ebp, 1
// 00679b43  55                   push ebp
// 00679b44  6a02                 push 2
// 00679b46  89430c               mov dword ptr [ebx + 0xc], eax
// 00679b49  8b16                 mov edx, dword ptr [esi]
// 00679b4b  8b4204               mov eax, dword ptr [edx + 4]
// 00679b4e  6a00                 push 0
// 00679b50  6a00                 push 0
// 00679b52  8bce                 mov ecx, esi
// 00679b54  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 00679b5c  ffd0                 call eax
// 00679b5e  6a02                 push 2
// 00679b60  ff1568438000         call dword ptr [0x804368]
// 00679b66  83c404               add esp, 4
// 00679b69  8bf8                 mov edi, eax
// 00679b6b  ff1564438000         call dword ptr [0x804364]
// 00679b71  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 00679b74  8b10                 mov edx, dword ptr [eax]
// 00679b76  8b521c               mov edx, dword ptr [edx + 0x1c]
// 00679b79  6a00                 push 0
// 00679b7b  6a05                 push 5
// 00679b7d  51                   push ecx
// 00679b7e  57                   push edi
// 00679b7f  8d4c2428             lea ecx, [esp + 0x28]
// 00679b83  51                   push ecx
// 00679b84  8bc8                 mov ecx, eax
// 00679b86  ffd2                 call edx
// 00679b88  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00679b8c  8b4104               mov eax, dword ptr [ecx + 4]
// 00679b8f  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 00679b93  8b11                 mov edx, dword ptr [ecx]
// 00679b95  55                   push ebp
// 00679b96  57                   push edi
// 00679b97  50                   push eax
// 00679b98  8b4218               mov eax, dword ptr [edx + 0x18]
// 00679b9b  6a00                 push 0
// 00679b9d  896c2464             mov dword ptr [esp + 0x64], ebp
// 00679ba1  ffd0                 call eax
// 00679ba3  8b7b04               mov edi, dword ptr [ebx + 4]
// 00679ba6  8b17                 mov edx, dword ptr [edi]
// 00679ba8  8b5204               mov edx, dword ptr [edx + 4]
// 00679bab  8d442418             lea eax, [esp + 0x18]
// 00679baf  50                   push eax
// 00679bb0  6a00                 push 0
// 00679bb2  8bcf                 mov ecx, edi
// 00679bb4  ffd2                 call edx
// 00679bb6  837c246800           cmp dword ptr [esp + 0x68], 0
// 00679bbb  0f8460010000         je 0x679d21
// 00679bc1  8d4c2434             lea ecx, [esp + 0x34]
// 00679bc5  e806f8daff           call 0x4293d0
// 00679bca  8b442460             mov eax, dword ptr [esp + 0x60]
// 00679bce  6a00                 push 0
// 00679bd0  50                   push eax
// 00679bd1  8d4c243c             lea ecx, [esp + 0x3c]
// 00679bd5  c644245c02           mov byte ptr [esp + 0x5c], 2
// 00679bda  e801d2f6ff           call 0x5e6de0
// 00679bdf  33ed                 xor ebp, ebp
// 00679be1  396c2460             cmp dword ptr [esp + 0x60], ebp
// 00679be5  7662                 jbe 0x679c49
// 00679be7  8b442468             mov eax, dword ptr [esp + 0x68]
// 00679beb  89442468             mov dword ptr [esp + 0x68], eax
// 00679bef  eb04                 jmp 0x679bf5
// 00679bf1  8b442468             mov eax, dword ptr [esp + 0x68]
// 00679bf5  d900                 fld dword ptr [eax]
// 00679bf7  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00679bfb  d900                 fld dword ptr [eax]
// 00679bfd  2b4c2440             sub ecx, dword ptr [esp + 0x40]
// 00679c01  d900                 fld dword ptr [eax]
// 00679c03  d900                 fld dword ptr [eax]
// 00679c05  c1f902               sar ecx, 2
// 00679c08  d95c2424             fstp dword ptr [esp + 0x24]
// 00679c0c  d95c2428             fstp dword ptr [esp + 0x28]
// 00679c10  d95c242c             fstp dword ptr [esp + 0x2c]
// 00679c14  d95c2430             fstp dword ptr [esp + 0x30]
// 00679c18  3be9                 cmp ebp, ecx
// 00679c1a  7206                 jb 0x679c22
// 00679c1c  ff1590288000         call dword ptr [0x802890]
// 00679c22  8b442440             mov eax, dword ptr [esp + 0x40]
// 00679c26  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00679c2a  8b11                 mov edx, dword ptr [ecx]
// 00679c2c  8b9208010000         mov edx, dword ptr [edx + 0x108]
// 00679c32  8d04a8               lea eax, [eax + ebp*4]
// 00679c35  50                   push eax
// 00679c36  8d442428             lea eax, [esp + 0x28]
// 00679c3a  50                   push eax
// 00679c3b  ffd2                 call edx
// 00679c3d  8344246810           add dword ptr [esp + 0x68], 0x10
// 00679c42  45                   inc ebp
// 00679c43  3b6c2460             cmp ebp, dword ptr [esp + 0x60]
// 00679c47  72a8                 jb 0x679bf1
// 00679c49  8b06                 mov eax, dword ptr [esi]
// 00679c4b  8b5004               mov edx, dword ptr [eax + 4]
// 00679c4e  6a00                 push 0
// 00679c50  6a05                 push 5
// 00679c52  6a04                 push 4
// 00679c54  6a00                 push 0
// 00679c56  6a01                 push 1
// 00679c58  8bce                 mov ecx, esi
// 00679c5a  ffd2                 call edx
// 00679c5c  6a04                 push 4
// 00679c5e  ff1568438000         call dword ptr [0x804368]
// 00679c64  83c404               add esp, 4
// 00679c67  8be8                 mov ebp, eax
// 00679c69  ff1564438000         call dword ptr [0x804364]
// 00679c6f  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 00679c72  8b10                 mov edx, dword ptr [eax]
// 00679c74  8b521c               mov edx, dword ptr [edx + 0x1c]
// 00679c77  6a00                 push 0
// 00679c79  6a05                 push 5
// 00679c7b  51                   push ecx
// 00679c7c  55                   push ebp
// 00679c7d  8d4c2434             lea ecx, [esp + 0x34]
// 00679c81  51                   push ecx
// 00679c82  8bc8                 mov ecx, eax
// 00679c84  ffd2                 call edx
// 00679c86  50                   push eax
// 00679c87  8d4c241c             lea ecx, [esp + 0x1c]
// 00679c8b  c644245803           mov byte ptr [esp + 0x58], 3
// 00679c90  ff1560438000         call dword ptr [0x804360]
// 00679c96  8d4c2424             lea ecx, [esp + 0x24]
// 00679c9a  c644245402           mov byte ptr [esp + 0x54], 2
// 00679c9f  ff155c438000         call dword ptr [0x80435c]
// 00679ca5  8b442444             mov eax, dword ptr [esp + 0x44]
// 00679ca9  2b442440             sub eax, dword ptr [esp + 0x40]
// 00679cad  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00679cb1  c1f802               sar eax, 2
// 00679cb4  85c0                 test eax, eax
// 00679cb6  7706                 ja 0x679cbe
// 00679cb8  ff1590288000         call dword ptr [0x802890]
// 00679cbe  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00679cc2  8b4104               mov eax, dword ptr [ecx + 4]
// 00679cc5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00679cc9  8b5500               mov edx, dword ptr [ebp]
// 00679ccc  8b5218               mov edx, dword ptr [edx + 0x18]
// 00679ccf  6a01                 push 1
// 00679cd1  51                   push ecx
// 00679cd2  50                   push eax
// 00679cd3  6a00                 push 0
// 00679cd5  8bcd                 mov ecx, ebp
// 00679cd7  ffd2                 call edx
// 00679cd9  8b07                 mov eax, dword ptr [edi]
// 00679cdb  8b5004               mov edx, dword ptr [eax + 4]
// 00679cde  8d4c2418             lea ecx, [esp + 0x18]
// 00679ce2  51                   push ecx
// 00679ce3  6a01                 push 1
// 00679ce5  8bcf                 mov ecx, edi
// 00679ce7  ffd2                 call edx
// 00679ce9  8b442440             mov eax, dword ptr [esp + 0x40]
// 00679ced  33c9                 xor ecx, ecx
// 00679cef  bd02000000           mov ebp, 2
// 00679cf4  c644245401           mov byte ptr [esp + 0x54], 1
// 00679cf9  3bc1                 cmp eax, ecx
// 00679cfb  740b                 je 0x679d08
// 00679cfd  50                   push eax
// 00679cfe  e877690200           call 0x6a067a
// 00679d03  83c404               add esp, 4
// 00679d06  33c9                 xor ecx, ecx
// 00679d08  8b442434             mov eax, dword ptr [esp + 0x34]
// 00679d0c  50                   push eax
// 00679d0d  894c2444             mov dword ptr [esp + 0x44], ecx
// 00679d11  894c2448             mov dword ptr [esp + 0x48], ecx
// 00679d15  894c244c             mov dword ptr [esp + 0x4c], ecx
// 00679d19  e85c690200           call 0x6a067a
// 00679d1e  83c404               add esp, 4
// 00679d21  837c246400           cmp dword ptr [esp + 0x64], 0
// 00679d26  0f8489000000         je 0x679db5
// 00679d2c  8b16                 mov edx, dword ptr [esi]
// 00679d2e  8b4204               mov eax, dword ptr [edx + 4]
// 00679d31  6a00                 push 0
// 00679d33  6a04                 push 4
// 00679d35  6a02                 push 2
// 00679d37  6a00                 push 0
// 00679d39  55                   push ebp
// 00679d3a  8bce                 mov ecx, esi
// 00679d3c  ffd0                 call eax
// 00679d3e  6a02                 push 2
// 00679d40  ff1568438000         call dword ptr [0x804368]
// 00679d46  83c404               add esp, 4
// 00679d49  89442460             mov dword ptr [esp + 0x60], eax
// 00679d4d  ff1564438000         call dword ptr [0x804364]
// 00679d53  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 00679d56  8b10                 mov edx, dword ptr [eax]
// 00679d58  8b521c               mov edx, dword ptr [edx + 0x1c]
// 00679d5b  6a00                 push 0
// 00679d5d  6a05                 push 5
// 00679d5f  51                   push ecx
// 00679d60  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00679d64  51                   push ecx
// 00679d65  8d4c2434             lea ecx, [esp + 0x34]
// 00679d69  51                   push ecx
// 00679d6a  8bc8                 mov ecx, eax
// 00679d6c  ffd2                 call edx
// 00679d6e  50                   push eax
// 00679d6f  8d4c241c             lea ecx, [esp + 0x1c]
// 00679d73  c644245804           mov byte ptr [esp + 0x58], 4
// 00679d78  ff1560438000         call dword ptr [0x804360]
// 00679d7e  8d4c2424             lea ecx, [esp + 0x24]
// 00679d82  c644245401           mov byte ptr [esp + 0x54], 1
// 00679d87  ff155c438000         call dword ptr [0x80435c]
// 00679d8d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00679d91  8b442464             mov eax, dword ptr [esp + 0x64]
// 00679d95  8b11                 mov edx, dword ptr [ecx]
// 00679d97  8b5218               mov edx, dword ptr [edx + 0x18]
// 00679d9a  6a01                 push 1
// 00679d9c  50                   push eax
// 00679d9d  8b4104               mov eax, dword ptr [ecx + 4]
// 00679da0  50                   push eax
// 00679da1  6a00                 push 0
// 00679da3  ffd2                 call edx
// 00679da5  8b07                 mov eax, dword ptr [edi]
// 00679da7  8b5004               mov edx, dword ptr [eax + 4]
// 00679daa  8d4c2418             lea ecx, [esp + 0x18]
// 00679dae  51                   push ecx
// 00679daf  55                   push ebp
// 00679db0  8bcf                 mov ecx, edi
// 00679db2  ffd2                 call edx
// 00679db4  45                   inc ebp
// 00679db5  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 00679dba  0f8482000000         je 0x679e42
// 00679dc0  8b06                 mov eax, dword ptr [esi]
// 00679dc2  8b5004               mov edx, dword ptr [eax + 4]
// 00679dc5  6a00                 push 0
// 00679dc7  6a07                 push 7
// 00679dc9  6a01                 push 1
// 00679dcb  6a00                 push 0
// 00679dcd  55                   push ebp
// 00679dce  8bce                 mov ecx, esi
// 00679dd0  ffd2                 call edx
// 00679dd2  6a01                 push 1
// 00679dd4  ff1568438000         call dword ptr [0x804368]
// 00679dda  83c404               add esp, 4
// 00679ddd  8bf0                 mov esi, eax
// 00679ddf  ff1564438000         call dword ptr [0x804364]
// 00679de5  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 00679de8  8b10                 mov edx, dword ptr [eax]
// 00679dea  8b521c               mov edx, dword ptr [edx + 0x1c]
// 00679ded  6a00                 push 0
// 00679def  6a05                 push 5
// 00679df1  51                   push ecx
// 00679df2  56                   push esi
// 00679df3  8d4c2434             lea ecx, [esp + 0x34]
// 00679df7  51                   push ecx
// 00679df8  8bc8                 mov ecx, eax
// 00679dfa  ffd2                 call edx
// 00679dfc  50                   push eax
// 00679dfd  8d4c241c             lea ecx, [esp + 0x1c]
// 00679e01  c644245805           mov byte ptr [esp + 0x58], 5
// 00679e06  ff1560438000         call dword ptr [0x804360]
// 00679e0c  8d4c2424             lea ecx, [esp + 0x24]
// 00679e10  c644245401           mov byte ptr [esp + 0x54], 1
// 00679e15  ff155c438000         call dword ptr [0x80435c]
// 00679e1b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00679e1f  8b4104               mov eax, dword ptr [ecx + 4]
// 00679e22  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00679e26  8b11                 mov edx, dword ptr [ecx]
// 00679e28  6a01                 push 1
// 00679e2a  56                   push esi
// 00679e2b  50                   push eax
// 00679e2c  8b4218               mov eax, dword ptr [edx + 0x18]
// 00679e2f  6a00                 push 0
// 00679e31  ffd0                 call eax
// 00679e33  8b17                 mov edx, dword ptr [edi]
// 00679e35  8b5204               mov edx, dword ptr [edx + 4]
// 00679e38  8d442418             lea eax, [esp + 0x18]
// 00679e3c  50                   push eax
// 00679e3d  55                   push ebp
// 00679e3e  8bcf                 mov ecx, edi
// 00679e40  ffd2                 call edx
// 00679e42  8d4c2418             lea ecx, [esp + 0x18]
// 00679e46  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 00679e4e  ff155c438000         call dword ptr [0x80435c]
// 00679e54  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00679e58  5f                   pop edi
// 00679e59  5e                   pop esi
// 00679e5a  5d                   pop ebp
// 00679e5b  8bc3                 mov eax, ebx
// 00679e5d  5b                   pop ebx
// 00679e5e  64890d00000000       mov dword ptr fs:[0], ecx
// 00679e65  83c448               add esp, 0x48
// 00679e68  c21400               ret 0x14

// from server: 98% by EspClaude
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
#include <vector>

namespace Ogre {
typedef unsigned int uint32;
enum VertexElementType { VET_FLOAT1, VET_FLOAT2, VET_FLOAT3, VET_FLOAT4, VET_COLOUR };
enum VertexElementSemantic { VES_POSITION = 1, VES_BLEND_WEIGHTS, VES_BLEND_INDICES, VES_NORMAL, VES_DIFFUSE, VES_SPECULAR, VES_TEXTURE_COORDINATES };
class ColourValue {
public:
    explicit ColourValue(float red = 1.0f, float green = 1.0f, float blue = 1.0f, float alpha = 1.0f) : r(red), g(green), b(blue), a(alpha) {}
    float r, g, b, a;
};
class VertexElement {
public:
    __declspec(dllimport) static unsigned int getTypeSize(VertexElementType etype);
};
class HardwareBuffer {
public:
    virtual ~HardwareBuffer();
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void writeData(unsigned int offset, unsigned int length, const void* pSource, bool discardWholeBuffer = false) = 0;
    unsigned int getSizeInBytes() const { return mSizeInBytes; }
    unsigned int mSizeInBytes;
};
class HardwareVertexBuffer : public HardwareBuffer {};
class HardwareVertexBufferSharedPtr {
public:
    __declspec(dllimport) virtual ~HardwareVertexBufferSharedPtr();
    __declspec(dllimport) HardwareVertexBufferSharedPtr& operator=(const HardwareVertexBufferSharedPtr& r);
    HardwareVertexBuffer* operator->() const { return pRep; }
    HardwareVertexBuffer* pRep;
    unsigned int* pUseCount;
};
enum Usage { HBU_STATIC_WRITE_ONLY = 5 };
class HardwareBufferManager {
public:
    __declspec(dllimport) static HardwareBufferManager& getSingleton();
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual HardwareVertexBufferSharedPtr createVertexBuffer(unsigned int vertexSize, unsigned int numVerts, Usage usage, bool useShadowBuffer = false) = 0;
};
class VertexDeclaration {
public:
    virtual ~VertexDeclaration();
    virtual const VertexElement& addElement(unsigned short source, unsigned int offset, VertexElementType theType, VertexElementSemantic semantic, unsigned short index = 0);
};
class VertexBufferBinding {
public:
    virtual ~VertexBufferBinding();
    virtual void setBinding(unsigned short index, const HardwareVertexBufferSharedPtr& buffer);
};
class VertexData {
public:
    __declspec(dllimport) VertexData();
    VertexDeclaration* vertexDeclaration;
    VertexBufferBinding* vertexBufferBinding;
    unsigned int vertexStart;
    unsigned int vertexCount;
    char pad[0x38 - 0x10];
};
class RenderSystem {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual void d29();
    virtual void d30();
    virtual void d31();
    virtual void d32();
    virtual void d33();
    virtual void d34();
    virtual void d35();
    virtual void d36();
    virtual void d37();
    virtual void d38();
    virtual void d39();
    virtual void d40();
    virtual void d41();
    virtual void d42();
    virtual void d43();
    virtual void d44();
    virtual void d45();
    virtual void d46();
    virtual void d47();
    virtual void d48();
    virtual void d49();
    virtual void d50();
    virtual void d51();
    virtual void d52();
    virtual void d53();
    virtual void d54();
    virtual void d55();
    virtual void d56();
    virtual void d57();
    virtual void d58();
    virtual void d59();
    virtual void d60();
    virtual void d61();
    virtual void d62();
    virtual void d63();
    virtual void d64();
    virtual void d65();
    virtual void convertColourValue(const ColourValue& colour, uint32* pDest);
};
class Root {
public:
    __declspec(dllimport) static Root& getSingleton();
    __declspec(dllimport) RenderSystem* getRenderSystem();
};
struct Vector3 { float x, y, z; };
}

namespace RBX {
struct ColourArray : public std::vector<Ogre::uint32> { __declspec(noinline) ColourArray() {} };
struct Color4 { float r, g, b, a; };
class OgreUtil {
public:
    Ogre::VertexData* createVertexData(const Ogre::Vector3* positions, unsigned int count, const Ogre::Vector3* normals, const Color4* colors, const float* texCoords);
};

Ogre::VertexData* OgreUtil::createVertexData(const Ogre::Vector3* positions, unsigned int count, const Ogre::Vector3* normals, const Color4* colors, const float* texCoords)
{
    Ogre::RenderSystem* rs = Ogre::Root::getSingleton().getRenderSystem();
    Ogre::VertexData* vd = new Ogre::VertexData();
    vd->vertexCount = count;
    Ogre::VertexDeclaration* decl = vd->vertexDeclaration;
    unsigned short source = 0;
    decl->addElement(source, 0, Ogre::VET_FLOAT3, Ogre::VES_POSITION);
    unsigned int vsize = Ogre::VertexElement::getTypeSize(Ogre::VET_FLOAT3);
    Ogre::HardwareVertexBufferSharedPtr vbuf = Ogre::HardwareBufferManager::getSingleton().createVertexBuffer(vsize, vd->vertexCount, Ogre::HBU_STATIC_WRITE_ONLY);
    vbuf->writeData(0, vbuf->getSizeInBytes(), positions, true);
    Ogre::VertexBufferBinding* bind = vd->vertexBufferBinding;
    bind->setBinding(source, vbuf);
    ++source;
    if (colors) {
        ColourArray colourData;
        colourData.resize(count);
        for (unsigned int i = 0; i < count; ++i) {
            float ca = colors[i].r;
            float cb = colors[i].r;
            float cg = colors[i].r;
            float cr = colors[i].r;
            Ogre::ColourValue c(cr, cg, cb, ca);
            rs->convertColourValue(c, &colourData[i]);
        }
        decl->addElement(source, 0, Ogre::VET_COLOUR, Ogre::VES_DIFFUSE);
        unsigned int csize = Ogre::VertexElement::getTypeSize(Ogre::VET_COLOUR);
        vbuf = Ogre::HardwareBufferManager::getSingleton().createVertexBuffer(csize, vd->vertexCount, Ogre::HBU_STATIC_WRITE_ONLY);
        vbuf->writeData(0, vbuf->getSizeInBytes(), &colourData[0], true);
        bind->setBinding(source, vbuf);
        ++source;
    }
    if (normals) {
        decl->addElement(source, 0, Ogre::VET_FLOAT3, Ogre::VES_NORMAL);
        unsigned int size = Ogre::VertexElement::getTypeSize(Ogre::VET_FLOAT3);
        vbuf = Ogre::HardwareBufferManager::getSingleton().createVertexBuffer(size, vd->vertexCount, Ogre::HBU_STATIC_WRITE_ONLY);
        vbuf->writeData(0, vbuf->getSizeInBytes(), normals, true);
        bind->setBinding(source, vbuf);
        ++source;
    }
    if (texCoords) {
        decl->addElement(source, 0, Ogre::VET_FLOAT2, Ogre::VES_TEXTURE_COORDINATES);
        unsigned int size = Ogre::VertexElement::getTypeSize(Ogre::VET_FLOAT2);
        vbuf = Ogre::HardwareBufferManager::getSingleton().createVertexBuffer(size, vd->vertexCount, Ogre::HBU_STATIC_WRITE_ONLY);
        vbuf->writeData(0, vbuf->getSizeInBytes(), texCoords, true);
        bind->setBinding(source, vbuf);
    }
    return vd;
}
}
