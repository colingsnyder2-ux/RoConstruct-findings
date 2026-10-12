// from server: 89% by king_originala
struct XmlNode;
struct ArchiveBinder;
struct DataModel;

extern void __cdecl operator delete(void *);
extern void __cdecl loadXml(XmlNode *, DataModel *);
extern const void *robloxTag;
extern const void *versionAttribute;
extern _ThrowInfo exceptionTypeInfo;
extern "C" __declspec(noreturn) void __stdcall throwException(void *, _ThrowInfo *);

struct String {
    char storage[28];
    String(const char *);
    ~String();
};

struct LoadException {
    char storage[40];
    LoadException(const String &);
    ~LoadException();
};

struct AttributeValue {
    bool read(ArchiveBinder *);
};

struct Attribute {
    char padding[8];
    AttributeValue value;
};

struct XmlNode {
    char padding[16];
    const void *tag;
    ~XmlNode();
    Attribute *findAttribute(const void *);
};

struct TemporaryOwner {
    mutable XmlNode *node;
    ~TemporaryOwner();
};

struct NodeOwner {
    XmlNode *node;
    explicit NodeOwner(const TemporaryOwner &);
    ~NodeOwner();
};

struct Parser {
    char storage[72];
    explicit Parser(void *);
    ~Parser();
    TemporaryOwner parse();
};

struct Stream {
    int *virtualTable;
};

struct Completion {
    virtual void finish(int);
};

struct DataModel {
    char padding[496];
    Completion completion;
};

struct ArchiveBinder {
    int schemaVersionLoading;
    void load(Stream *, DataModel *);
};

__forceinline TemporaryOwner::~TemporaryOwner() {
    if (node)
        delete node;
}

__forceinline NodeOwner::NodeOwner(const TemporaryOwner &other)
    : node(other.node) {
    other.node = 0;
}

__forceinline NodeOwner::~NodeOwner() {
    if (node)
        delete node;
}

void ArchiveBinder::load(Stream *stream, DataModel *model) {
    Parser parser(*reinterpret_cast<void **>(
        reinterpret_cast<char *>(stream) + stream->virtualTable[1] + 40));
    NodeOwner root(parser.parse());

    if (root.node->tag == robloxTag) {
        if (!root.node->findAttribute(versionAttribute)->value.read(this)) {
            String message("SerializerV2::loadXML no version number");
            LoadException exception(message);
            throwException(&exception, &exceptionTypeInfo);
        }

        if (schemaVersionLoading < 4) {
            String message("SerializerV2::loadXML schemaVersionLoading<4");
            LoadException exception(message);
            throwException(&exception, &exceptionTypeInfo);
        }

        loadXml(root.node, model);
        model->completion.finish(0);
    } else {
        schemaVersionLoading = 1;
        String message("SerializerV2::loadXML ill-formed XML. No Roblox tag");
        LoadException exception(message);
        throwException(&exception, &exceptionTypeInfo);
    }
}
