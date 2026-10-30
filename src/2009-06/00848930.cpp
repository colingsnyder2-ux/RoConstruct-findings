// roc 2009-06 00848930  unit: RBX::RbxG3D::Material  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00848930
//
// 00848930  8b4110               mov eax, dword ptr [ecx + 0x10]
// 00848933  56                   push esi
// 00848934  8d710c               lea esi, [ecx + 0xc]
// 00848937  6a00                 push 0
// 00848939  40                   inc eax
// 0084893a  50                   push eax
// 0084893b  8bce                 mov ecx, esi
// 0084893d  e86efdffff           call 0x8486b0
// 00848942  8b4e04               mov ecx, dword ptr [esi + 4]
// 00848945  8b16                 mov edx, dword ptr [esi]
// 00848947  6bc92c               imul ecx, ecx, 0x2c
// 0084894a  8d4411d4             lea eax, [ecx + edx - 0x2c]
// 0084894e  5e                   pop esi
// 0084894f  c3                   ret 
// copied from an identical function in another client (function ?addLevel@Material@Render@RBX@@QAEAAULevel@23@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
namespace G3D { template<class T> class Array { T* data; int num; int numAllocated; public:
 void resize(int n, bool shrinkIfNecessary = true); T& next() { resize(num + 1, false); return data[num - 1]; } }; }
namespace RBX { namespace Render {
struct Level { int d[11]; };
class Material { char pad[0xc]; G3D::Array<Level> levels; public: Level& addLevel(); };
Level& Material::addLevel() { return levels.next(); } } }