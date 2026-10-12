// from server: 96% by king_originala
struct SceneManager;
struct String;

struct SceneNode {
    virtual ~SceneNode();
    SceneNode(SceneManager*, const String&);
    char storage[0x224];
};

struct EmptyPolicy {
    EmptyPolicy();
};

inline EmptyPolicy::EmptyPolicy()
{
}

struct Member {
    Member(const EmptyPolicy&, const EmptyPolicy&);
    ~Member();
};

struct AdornRbxGfx : SceneNode {
    Member member;

    AdornRbxGfx(SceneManager*, const String*);
    virtual ~AdornRbxGfx();
};

AdornRbxGfx::AdornRbxGfx(SceneManager* manager, const String* name)
    : SceneNode(manager, *name), member(EmptyPolicy(), EmptyPolicy())
{
}
