#if !defined(ANIMATION_API)
	#define ANIMATION_API /* NOTHING */

	#if defined(WIN32) || defined(WIN64)
		#undef ANIMATION_API
		#if defined(animation_EXPORTS)
			#define ANIMATION_API __declspec(dllexport)
		#else
			#define ANIMATION_API __declspec(dllimport)
		#endif
	#endif // defined(WIN32) || defined(WIN64)

#endif // !defined(ANIMATION_API)

