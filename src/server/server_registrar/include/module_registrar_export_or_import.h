
#ifndef module_registrar_export_H
#define module_registrar_export_H

#ifdef MODULE_REGISTRAR_STATIC_DEFINE
#  define module_registrar_export
#  define module_registrar_hidden
#else
#  ifndef module_registrar_export
#    ifdef module_registrar_EXPORTS
        /* We are building this library */
#      define module_registrar_export __declspec(dllexport)
#    else
        /* We are using this library */
#      define module_registrar_export __declspec(dllimport)
#    endif
#  endif

#  ifndef module_registrar_hidden
#    define module_registrar_hidden 
#  endif
#endif

#ifndef MODULE_REGISTRAR_DEPRECATED
#  define MODULE_REGISTRAR_DEPRECATED __declspec(deprecated)
#endif

#ifndef MODULE_REGISTRAR_DEPRECATED_EXPORT
#  define MODULE_REGISTRAR_DEPRECATED_EXPORT module_registrar_export MODULE_REGISTRAR_DEPRECATED
#endif

#ifndef MODULE_REGISTRAR_DEPRECATED_NO_EXPORT
#  define MODULE_REGISTRAR_DEPRECATED_NO_EXPORT module_registrar_hidden MODULE_REGISTRAR_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef MODULE_REGISTRAR_NO_DEPRECATED
#    define MODULE_REGISTRAR_NO_DEPRECATED
#  endif
#endif

#endif /* module_registrar_export_H */
