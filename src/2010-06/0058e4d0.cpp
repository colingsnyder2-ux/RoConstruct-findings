// roc 2010-06 0058e4d0  unit: RBX::Network::P8Player::?$GetSetImpl  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058e4d0
//
// 0058e4d0  8b442404             mov eax, dword ptr [esp + 4]
// 0058e4d4  8bd1                 mov edx, ecx
// 0058e4d6  85c0                 test eax, eax
// 0058e4d8  7410                 je 0x58e4ea
// 0058e4da  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0058e4dd  83c0e4               add eax, -0x1c
// 0058e4e0  03c8                 add ecx, eax
// 0058e4e2  8b4208               mov eax, dword ptr [edx + 8]
// 0058e4e5  ffd0                 call eax
// 0058e4e7  c20400               ret 4
// 0058e4ea  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0058e4ed  33c0                 xor eax, eax
// 0058e4ef  03c8                 add ecx, eax
// 0058e4f1  8b4208               mov eax, dword ptr [edx + 8]
// 0058e4f4  ffd0                 call eax
// 0058e4f6  c20400               ret 4
// copied from an identical function in another client (function ?getValue@?$GetImpl@P8Class@@BEHXZ@@UBEHPBVDescribedBase@@@Z)

// from server: 100% by tajop
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// Codegen analog of reflection GetImpl/GetSetImpl::getValue. The target converts
// DescribedBase* to Class* with "add eax,-0x1c": DescribedBase sits at +0x1c.
// Get member pointer is an 8-byte {fn, adj} pair at +8; result returned in eax.

class DescribedBase { public: virtual ~DescribedBase(); };
// Bytes preceding DescribedBase in Class, sized from the target's 0x1c adjust.
class Before { public: virtual ~Before(); int words[6]; };
class Class : public Before, public DescribedBase {
public:
	int getIt() const;
};

class GetSet {
public:
	virtual ~GetSet() {}
	virtual int getValue(const DescribedBase* object) const = 0;
	int reserved;
};

template<typename GetFunction>
class GetImpl : public GetSet {
	GetFunction get;
public:
	GetImpl(GetFunction get) : get(get) {}
	virtual int getValue(const DescribedBase* object) const
	{
		Class* o = (Class*)object;
		return (o->*get)();
	}
};

template class GetImpl<int (Class::*)() const>;