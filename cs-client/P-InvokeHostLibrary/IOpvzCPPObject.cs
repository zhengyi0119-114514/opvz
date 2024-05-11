namespace P_InvokeHostLibrary;

public interface IOpvzCPPObject
{
    UInt32 ObjID { get; }
    IntPtr ObjHandle{ get; }
}
