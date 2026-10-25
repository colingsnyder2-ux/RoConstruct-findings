// from server: 100% by colin
// roc 2008-06 005469e0  unit: seg_00540000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005469e0
//
// 005469e0  55                   push ebp
// 005469e1  8bec                 mov ebp, esp
// 005469e3  6aff                 push -1
// 005469e5  6880cd7c00           push 0x7ccd80
// 005469ea  64a100000000         mov eax, dword ptr fs:[0]
// 005469f0  50                   push eax
// 005469f1  51                   push ecx
// 005469f2  51                   push ecx
// 005469f3  53                   push ebx
// 005469f4  56                   push esi
// 005469f5  57                   push edi
// 005469f6  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 005469fb  33c5                 xor eax, ebp
// 005469fd  50                   push eax
// 005469fe  8d45f4               lea eax, [ebp - 0xc]
// 00546a01  64a300000000         mov dword ptr fs:[0], eax
// 00546a07  8965f0               mov dword ptr [ebp - 0x10], esp
// 00546a0a  8b4508               mov eax, dword ptr [ebp + 8]
// 00546a0d  8945ec               mov dword ptr [ebp - 0x14], eax
// 00546a10  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00546a17  eb12                 jmp 0x546a2b
// 00546a19  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00546a1c  83e901               sub ecx, 1
// 00546a1f  894d0c               mov dword ptr [ebp + 0xc], ecx
// 00546a22  8b5508               mov edx, dword ptr [ebp + 8]
// 00546a25  83c204               add edx, 4
// 00546a28  895508               mov dword ptr [ebp + 8], edx
// 00546a2b  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 00546a2f  7612                 jbe 0x546a43
// 00546a31  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00546a34  50                   push eax
// 00546a35  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00546a38  51                   push ecx
// 00546a39  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 00546a3c  e8bf020000           call 0x546d00
// 00546a41  ebd6                 jmp 0x546a19
// 00546a43  eb37                 jmp 0x546a7c

// 2008-06 005469e0 std::_Uninit_fill_n<Vertex*, int, Vertex, allocator<Vertex>,
// _Nonscalar_ptr_iterator_tag, _Range_checked_iterator_tag>
// Authentic VC9 <memory> _Uninit_fill_n; target loop stride is 4 (a 4-byte
// Vertex), the WildMagic 2 Vertex is 0x18.
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS /EHsc /MD

#include <memory>
#include <xmemory>

class Vertex
{
public:
	int m_position;
	Vertex();
	Vertex(const Vertex&);
};

void UninitFillStub(Vertex* first, unsigned int count, const Vertex& val,
	std::allocator<Vertex>& al)
{
	std::_Uninit_fill_n(first, count, val, al,
		std::_Nonscalar_ptr_iterator_tag(), std::_Range_checked_iterator_tag());
}