// from server: 31% by colin
// roc 2008-06 004178a0  unit: VCLuaFunction::?$CComContainedObject  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004178a0
//
// 004178a0  8b442404             mov eax, dword ptr [esp + 4]
// 004178a4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004178a8  8b10                 mov edx, dword ptr [eax]
// 004178aa  ffe2                 jmp edx

struct FunctionDescriptor {
    const char* name;
    void (*execute)(void*, void*);
};

struct DescribedBase {
    // Placeholder for DescribedBase members
};

struct VCLuaFunction {
    virtual ~VCLuaFunction();
    virtual void executeFunction(void* instance, void* arguments);
};

struct Function {
    const FunctionDescriptor* descriptor;
    DescribedBase* instance;

    Function(const FunctionDescriptor& descriptor, DescribedBase* instance)
        : descriptor(&descriptor), instance(instance) {}

    Function(const Function& other)
        : descriptor(other.descriptor), instance(other.instance) {}

    Function& operator=(const Function& other) {
        this->descriptor = other.descriptor;
        this->instance = other.instance;
        return *this;
    }

    void execute(void* arguments) const {
        descriptor->execute(instance, arguments);
    }
};

extern "C" __declspec(dllimport) void executeFunction(void* instance, void* arguments);

void VCLuaFunction::executeFunction(void* instance, void* arguments) {
    executeFunction(instance, arguments);
}
